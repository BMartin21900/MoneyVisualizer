using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class SceneSwitch : MonoBehaviour
{
	public string inputText;
	[SerializeField]
	public TMP_InputField inputField;
    public void loadAR (){
		inputText = inputField.text;
		Data.dropNumber = int.Parse(inputText);
        SceneManager.LoadScene(1);
    }
	
	public void reloadAR (){
        SceneManager.LoadScene(1);
    }

    public void loadSettings(){
        SceneManager.LoadScene(2);
    }

    public void loadMenu (){
        SceneManager.LoadScene(0);
    }
	
	public void loadScanner (){
        SceneManager.LoadScene(3);
    }
	
	public void loadCardScan (){
        SceneManager.LoadScene(4);
    }
    // Start is called before the first frame update
    void Start()
    {
		
    }
	
	//private void SubmitName(string arg0)
    //{
    //    Data.dropNumber = int.Parse(arg0);
    //}

    // Update is called once per frame
    void Update()
    {
        
    }
}
