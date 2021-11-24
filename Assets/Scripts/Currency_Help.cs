using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Currency_Help : MonoBehaviour
{
	public string inputText;
	[SerializeField]
	public TMP_InputField inputField;
    public void loadAR (){
		inputText = inputField.text;
		Data.dropNumber = int.Parse(inputText);
        SceneManager.LoadScene(1);
    }
	
	public int currencyExchange(string fromC, string targetC, int amount){
		return 0;
	}
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
