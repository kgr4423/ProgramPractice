import random

hand = ["グー", "チョキ", "パー", "ゲーム終了"]

print("===じゃんけんしましょう===")

while True:
    com = random.randint(0, 2)
    for i, desc in enumerate(hand):
        print(i, ":", desc)
    you = int(input("出す手を数値で入力してください"))
    if you == 3: break
    if you < 0 or you > 2:
        print("０から３の間で入力してね")
        continue

    print("---")
    print("自分:", hand[you])
    print("相手:", hand[com])
    input("---")

    j = ( you - com + 3 ) % 3
    if j == 0:
        print("あいこです")
    elif j == 1:
        print("YOU LOSE")
        print("俺の勝ち！なんで負けたか明日までに考えといてください")
        print("ほな、いただきまーす")
    else:
        print("YOU WIN")
        print("負けたぁ、また明日、挑戦させて！")
        print("それじゃあ、どうぞ")
    input("---")
