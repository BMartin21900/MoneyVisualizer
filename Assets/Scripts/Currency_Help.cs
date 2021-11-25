using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Events;

[RequireComponent(typeof(Dropdown))]
public class Currency_Help : MonoBehaviour
{
	public string inputText;
	[SerializeField]
	public TMP_InputField inputField;
	
	public int startC = 0;
	public int targetC = 0;
	
	[SerializeField]
	public Dropdown _dropdown;
    public void loadAR(){
		inputText = inputField.text;
		Data.dropNumber = int.Parse(inputText);
        SceneManager.LoadScene(1);
    }
	
	public int currencyExchange(int startC, int targetC, int amount){
		return 0;
	}
	
	public void getStartCurrency(int value){
		startC = value;
	}
	
	public void getTargetCurrency(int value){
		targetC = value;
	}
	
    // Start is called before the first frame update
    void Start(){
		_dropdown.value = Data.defaultCurrency;
		startC = Data.defaultCurrency;
		//Debug.Log(Data.defaultCurrency);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
