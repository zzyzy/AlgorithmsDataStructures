/*
 * DataStructures
 * Binary Search Tree (simple)
 * https://en.wikipedia.org/wiki/Binary_search_tree
 * 
 * Written by Zhen Zhi Lee in TypeScript
 */

class BSTNode {
    public Data: number = 0;
    public Left: BSTNode = null;
    public Right: BSTNode = null;
}

export class BST {
    private _root: BSTNode = null;

    public Insert(value: number): void {
        if (!this._root) {
            this._root = new BSTNode;
            this._root.Data = value;
        } else {
            let parent = this._root;
            let current = this._root;

            // BST traversal
            // If value less than current node data, go Left
            // else, go right
            // If duplicate value, abort insertion
            while (current != null) {
                if (value < current.Data) {
                    parent = current;
                    current = current.Left;
                } else if (value == current.Data) {
                    return;
                } else if (value > current.Data) {
                    parent = current;
                    current = current.Right;
                }
            }

            // Create new BSTNode and attach to parent
            current = new BSTNode();
            current.Data = value;

            if (current.Data < parent.Data) {
                parent.Left = current;
            } else {
                parent.Right = current;
            }
        }
    }

    public Delete(value: number): void {
        if (!this._root) return;

        let parent = this._root;
        let current = this._root;

        while (current != null) {
            if (value < current.Data) {
                parent = current;
                current = current.Left;
            } else if (value == current.Data) {
                return;
            } else if (value > current.Data) {
                parent = current;
                current = current.Right;
            }
        }

        if (current.Data < parent.Data) {
            parent = parent.Left;
        } else {
            parent = parent.Right;
        }

        // TODO Handle deletion swap
    }

    public Display(): void {
        this.inOrderTraverse(this._root);
    }

    private inOrderTraverse(root: BSTNode): void {
        if (root) {
            this.inOrderTraverse(root.Left);
            console.log(root.Data);
            this.inOrderTraverse(root.Right);
        }
    }
}
