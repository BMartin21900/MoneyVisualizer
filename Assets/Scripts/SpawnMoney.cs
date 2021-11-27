using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnMoney : MonoBehaviour{
    //[SerializeField]
    private float spawn_times = Data.dropNumber;
    private float nextSpawn;
    //[SerializeField]
    private GameObject moneyPrefab = Data.targetCurrency;
    [SerializeField]
    private float spawnDelay = 1;

    // Start is called before the first frame update
    void Start(){
        //moneyPrefab = Data.targetCurrency;
    }

    private void Spawn(){
        nextSpawn = Time.time + spawnDelay;
        transform.rotation = Random.rotation;
        Instantiate(moneyPrefab, transform.position, transform.rotation);
    }

    private bool ShouldSpawn(){
        return Time.time >= nextSpawn;
    }

    // Update is called once per frame
    void Update(){
        if (spawn_times != 0 && ShouldSpawn()){
            Spawn();
            spawn_times -= 1;
        }
    }
}
