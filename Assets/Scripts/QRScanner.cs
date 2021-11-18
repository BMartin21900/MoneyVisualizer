using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ZXing;
using UnityEngine.UI;

public class QRScanner : MonoBehaviour
{

	public RawImage cameraTexture;
	public Text text;
	public Button proceedButton;
	
	private WebCamTexture webCamTexture;
	BarcodeReader barcodeReader;
	
	Color32[] data;
	bool scanned = false;
	float interval = 0.5f;
    // Start is called before the first frame update
    void Start(){
		DeviceInit();
		proceedButton.interactable = false;
    }

    // Update is called once per frame
    void Update(){
		if(!scanned){
			interval += Time.deltaTime;
			if(interval >= 2){
				interval = 0;
				Scan();
			}
		}
    }
	
	
	void DeviceInit(){
		WebCamDevice[] devices = WebCamTexture.devices; 
		
		//get Camera
		string deviceName = devices[0].name;
		
		webCamTexture = new WebCamTexture(deviceName,960,720); 
		cameraTexture.texture = webCamTexture;
		cameraTexture.rectTransform.localScale = new Vector3(-1f,1f,1f);
		cameraTexture.rectTransform.localEulerAngles = new Vector3(0,0,90);
		webCamTexture.Play();
		
		barcodeReader = new BarcodeReader();
	}
	
	void Scan(){
		data = webCamTexture.GetPixels32();
		Result result = barcodeReader.Decode(data, webCamTexture.width, webCamTexture.height);
		
		if(result != null){
			Debug.Log(result.Text);
			text.text = result.Text;
			
			scanned = true;
			proceedButton.interactable = true;
			webCamTexture.Stop();
		}
	}
	
	public void shutCam(){
		webCamTexture.Stop();
	}
}
