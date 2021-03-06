# メモ

## SFEN記法

|  駒  | 先手 (b) | 後手 (w) |        |
| :-: | :----: | :----: | :----: |
|  玉  |    K   |    k   |  King  |
|  飛  |    R   |    r   |  Rook  |
|  龍  |   +R   |   +r   |        |
|  角  |    B   |    b   | Bishop |
|  馬  |   +B   |   +b   |        |
|  金  |    G   |    g   |  Gold  |
|  銀  |    S   |    s   | Silver |
|  全  |   +S   |   +s   |        |
|  桂  |    N   |    n   | kNight |
|  圭  |   +N   |   +n   |        |
|  香  |    L   |    l   |  Lance |
|  杏  |   +L   |   +l   |        |
|  歩  |    P   |    p   |  Pawn  |
|  と  |   +P   |   +p   |        |

ex) 初期盤面 `lnsgkgsnl/1r5b1/ppppppppp/9/9/9/PPPPPPPPP/1B5R1/LNSGKGSNL w - 1`

## 将棋DB API

### 最新一覧

GET `https://api.shogidb2.com/latest?limit=5&offset=0`

```json
[
  {
    "開始日時": "2021-12-15T19:00:00.000+09:00",
    "終了日時": "2021-12-15T21:46:00.000+09:00",
    "棋戦詳細": "第７期叡王戦段位別予選七段戦",
    "棋戦": "叡王戦",
    "手合割": "平手",
    "戦型": "矢倉",
    "後手": "近藤誠也 七段",
    "場所": "東京都渋谷区「シャトーアメーバ」",
    "先手": "高見泰地 七段",
    "tournament_detail": "第７期叡王戦段位別予選七段戦",
    "tournament": "叡王戦",
    "time_consumed": null,
    "time": "１時間",
    "strategy": "矢倉",
    "start_at": "2021-12-15T19:00:00.000+09:00",
    "result": "gote_win",
    "provider": "human",
    "player2": "近藤誠也 七段",
    "player1": "高見泰地 七段",
    "place": "東京都渋谷区「シャトーアメーバ」",
    "id": 656614,
    "hash": "c47deb7e7a172533fbaeb259be48b5539551dd3d",
    "handicap": "平手",
    "end_at": "2021-12-15T21:46:00.000+09:00",
    "created_at": "2021-12-16T11:00:31.000+09:00",
    "_id": 656614,
    "youtubes": [],
    "comments": 0
  },
  {
    "開始日時": "2021-12-15T15:55:00.000+09:00",
    "終了日時": "2021-12-15T17:51:00.000+09:00",
    "棋戦詳細": "第７期叡王戦段位別予選七段戦",
    "棋戦": "叡王戦",
    "手合割": "平手",
    "戦型": "中飛車",
    "後手": "澤田真吾 七段",
    "場所": "東京都渋谷区「シャトーアメーバ」",
    "先手": "近藤誠也 七段",
    "tournament_detail": "第７期叡王戦段位別予選七段戦",
    "tournament": "叡王戦",
    "time_consumed": null,
    "time": "１時間",
    "strategy": "中飛車",
    "start_at": "2021-12-15T15:55:00.000+09:00",
    "result": "sente_win",
    "provider": "human",
    "player2": "澤田真吾 七段",
    "player1": "近藤誠也 七段",
    "place": "東京都渋谷区「シャトーアメーバ」",
    "id": 656528,
    "hash": "15b1682a9d54562f713e10e017d525446912c51a",
    "handicap": "平手",
    "end_at": "2021-12-15T17:51:00.000+09:00",
    "created_at": "2021-12-15T23:00:33.000+09:00",
    "_id": 656528,
    "youtubes": [],
    "comments": 0
  },
  {
    "開始日時": "2021-12-15T10:00:00.000+09:00",
    "終了日時": "2021-12-15T17:40:00.000+09:00",
    "棋戦詳細": "第93期ヒューリック杯棋聖戦二次予選",
    "棋戦": "棋聖戦",
    "手合割": "平手",
    "戦型": "その他の戦型",
    "後手": "島　　朗 九段",
    "場所": "東京・将棋会館",
    "先手": "中川大輔 八段",
    "tournament_detail": "第93期ヒューリック杯棋聖戦二次予選",
    "tournament": "棋聖戦",
    "time_consumed": null,
    "time": "３時間",
    "strategy": "その他の戦型",
    "start_at": "2021-12-15T10:00:00.000+09:00",
    "result": "gote_win",
    "provider": "human",
    "player2": "島　　朗 九段",
    "player1": "中川大輔 八段",
    "place": "東京・将棋会館",
    "id": 656480,
    "hash": "5ca7503a3f229f1a02cb0480d388154560a6d504",
    "handicap": "平手",
    "end_at": "2021-12-15T17:40:00.000+09:00",
    "created_at": "2021-12-15T18:00:31.000+09:00",
    "_id": 656480,
    "youtubes": [],
    "comments": 0
  },
  {
    "開始日時": "2021-12-15T10:00:00.000+09:00",
    "終了日時": "2021-12-15T22:18:00.000+09:00",
    "棋戦詳細": "第35期竜王戦２組ランキング戦",
    "棋戦": "竜王戦",
    "手合割": "平手",
    "戦型": "矢倉",
    "後手": "千田翔太 七段",
    "場所": "東京・将棋会館",
    "先手": "森内俊之 九段",
    "tournament_detail": "第35期竜王戦２組ランキング戦",
    "tournament": "竜王戦",
    "time_consumed": null,
    "time": "５時間",
    "strategy": "矢倉",
    "start_at": "2021-12-15T10:00:00.000+09:00",
    "result": "sente_win",
    "provider": "human",
    "player2": "千田翔太 七段",
    "player1": "森内俊之 九段",
    "place": "東京・将棋会館",
    "id": 656611,
    "hash": "c28c5cfbf0f43de725f42ec4faadc49bd5a67fc4",
    "handicap": "平手",
    "end_at": "2021-12-15T22:18:00.000+09:00",
    "created_at": "2021-12-16T11:00:29.000+09:00",
    "_id": 656611,
    "youtubes": [],
    "comments": 1
  },
  {
    "開始日時": "2021-12-15T10:00:00.000+09:00",
    "終了日時": "2021-12-16T00:33:00.000+09:00",
    "棋戦詳細": "第80期順位戦Ａ級６回戦",
    "棋戦": "順位戦",
    "手合割": "平手",
    "戦型": "矢倉",
    "後手": "山崎隆之 八段",
    "場所": "関西将棋会館",
    "先手": "羽生善治 九段",
    "tournament_detail": "第80期順位戦Ａ級６回戦",
    "tournament": "順位戦",
    "time_consumed": null,
    "time": "6時間",
    "strategy": "矢倉",
    "start_at": "2021-12-15T10:00:00.000+09:00",
    "result": "sente_win",
    "provider": "human",
    "player2": "山崎隆之 八段",
    "player1": "羽生善治 九段",
    "place": "関西将棋会館",
    "id": 656613,
    "hash": "77816452ddf28a0e58f56f50224b4679307bbd22",
    "handicap": "平手",
    "end_at": "2021-12-16T00:33:00.000+09:00",
    "created_at": "2021-12-16T11:00:30.000+09:00",
    "_id": 656613,
    "youtubes": [],
    "comments": 0
  }
]
```

### 棋譜

GET `https://api.shogidb2.com/eval/<id>/default.json`

_ウェブページのURLは `https://shogidb2.com/games/<hash>`_

```json
{
  "game_id": 656614,
  "hash": "c47deb7e7a172533fbaeb259be48b5539551dd3d",
  "evals": [
    {
      "index": 0,
      "sfen": "lnsgkgsnl/1r5b1/ppppppppp/9/9/9/PPPPPPPPP/1B5R1/LNSGKGSNL b - 1",
      "descriptions": [
        "先手 高見泰地 七段 対 後手近藤誠也 七段の対局。",
        "棋戦: 第７期叡王戦段位別予選七段戦\n開始日時: 2021-12-15 19:00:00\n終了日時: 2021-12-15 21:46:00\n手合割: 平手\n先手: 高見泰地 七段\n後手: 近藤誠也 七段"
      ]
    },
    {
      "index": 1,
      "csa": "+7776FU",
      "move": "７六歩(77)",
      "sfen": "lnsgkgsnl/1r5b1/ppppppppp/9/9/2P6/PP1PPPPPP/1B5R1/LNSGKGSNL w - 2",
      "score": 45,
      "mate": false,
      "bestmove": {
        "csa": "+7776FU",
        "score": 60,
        "pv": [
          "+2726FU",
          "-3334FU",
          "+2625FU",
          "-2233KA",
          "+7776FU",
          "-3142GI",
          "+8833UM",
          "-4233GI",
          "+7988GI",
          "-7374FU",
          "+4948KI",
          "-8173KE",
          "+3736FU",
          "-6162KI",
          "+2937KE",
          "-8281HI",
          "+2524FU",
          "-2324FU",
          "+3745KE",
          "-0055KA",
          "+4533KE",
          "-2133KE"
        ],
        "mate": false
      },
      "pv": [
        "-3334FU",
        "+2726FU",
        "-8384FU",
        "+2625FU",
        "-8485FU",
        "+6978KI",
        "-5142OU",
        "+5968OU",
        "-7172GI",
        "+2524FU",
        "-2324FU",
        "+2824HI",
        "-4132KI",
        "+3938GI",
        "-0023FU",
        "+2428HI",
        "-7374FU",
        "+3736FU",
        "-8586FU",
        "+8786FU",
        "-8286HI",
        "+0087FU",
        "-8676HI",
        "+8822UM",
        "-3122GI",
        "+0082KA",
        "-0073KA"
      ],
      "descriptions": []
    },
    {
      "index": 2,
      "csa": "-8384FU",
      "move": "８四歩(83)",
      "sfen": "lnsgkgsnl/1r5b1/p1ppppppp/1p7/9/2P6/PP1PPPPPP/1B5R1/LNSGKGSNL b - 3",
      "score": 87,
      "mate": false,
      "bestmove": {
        "csa": "-3334FU",
        "score": 93,
        "pv": [
          "-3334FU",
          "+2726FU",
          "-8384FU",
          "+2625FU",
          "-8485FU",
          "+5968OU",
          "-5142OU",
          "+6978KI",
          "-4132KI",
          "+2524FU",
          "-2324FU",
          "+2824HI",
          "-0023FU",
          "+2434HI",
          "-2288UM",
          "+7988GI",
          "-0027KA",
          "+3938GI",
          "-2745UM",
          "+3436HI",
          "-6364FU",
          "+8877GI"
        ],
        "mate": false
      },
      "pv": [
        "+8877KA",
        "-4132KI",
        "+7968GI",
        "-3334FU",
        "+6978KI",
        "-7172GI",
        "+2726FU",
        "-2277UM",
        "+6877GI",
        "-3122GI",
        "+3938GI",
        "-7374FU",
        "+3736FU",
        "-8173KE",
        "+2937KE",
        "-8281HI",
        "+2829HI",
        "-6162KI",
        "+4948KI",
        "-2233GI",
        "+4746FU",
        "-6364FU",
        "+2625FU",
        "-1314FU"
      ],
      "descriptions": []
    },
    {
      "index": 3,
      "csa": "+7968GI",
      "move": "６八銀(79)",
      "sfen": "lnsgkgsnl/1r5b1/p1ppppppp/1p7/9/2P6/PP1PPPPPP/1B1S3R1/LN1GKGSNL w - 4",
      "score": 85,
      "mate": false,
      "bestmove": {
        "csa": "+7968GI",
        "score": 97,
        "pv": [
          "+7968GI",
          "-3334FU",
          "+8877KA",
          "-4132KI",
          "+3938GI",
          "-7172GI",
          "+2726FU",
          "-2277UM",
          "+6877GI",
          "-3122GI",
          "+3736FU",
          "-7374FU",
          "+2937KE",
          "-8173KE",
          "+4746FU",
          "-2233GI",
          "+2829HI",
          "-8281HI",
          "+6978KI",
          "-3435FU",
          "+3635FU",
          "-3344GI",
          "+3534FU",
          "-4455GI",
          "+3847GI"
        ],
        "mate": false
      },
      "pv": [
        "-4132KI",
        "+8877KA",
        "-3334FU",
        "+2726FU",
        "-2277UM",
        "+6877GI",
        "-3142GI",
        "+3938GI",
        "-4233GI",
        "+3736FU",
        "-7374FU",
        "+2937KE",
        "-8173KE",
        "+2829HI",
        "-7172GI",
        "+4746FU",
        "-8281HI",
        "+4958KI",
        "-6162KI",
        "+5948OU",
        "-1314FU",
        "+6766FU",
        "-6364FU",
        "+3847GI"
      ],
      "descriptions": []
    },
      ︙
  ]
}
```
