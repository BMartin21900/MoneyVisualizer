using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScanCard : MonoBehaviour{

    public Text text;
    public GameObject currency;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
	
	public void cardScanned(){
        text.text = "Card found! Balance: $400";
		Data.card_Last_Four = 8596;
		Data.remainBalance = 5500;
        Data.dropNumber = 4;
		Data.targetCurrency = currency;
	}
}
