<h2><a href="https://www.codechef.com/learn/course/c/DSPLXG/problems/TWFCHF07">Identify the Correct Member to Access in a Struct</a></h2><h4>Difficulty: </h4><p>Fill in the blank to correctly access and print the value of the age member of a structure variable.</p><pre class="language-c" tabindex="0"><code class="language-c"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string">&lt;stdio.h&gt;</span></span>

<span class="token keyword">struct</span> <span class="token class-name">Person</span> <span class="token punctuation">{</span>
    <span class="token keyword">char</span> name<span class="token punctuation">[</span><span class="token number">20</span><span class="token punctuation">]</span><span class="token punctuation">;</span>
    <span class="token keyword">int</span> age<span class="token punctuation">;</span>
<span class="token punctuation">}</span><span class="token punctuation">;</span>

<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
    <span class="token keyword">struct</span> <span class="token class-name">Person</span> p1 <span class="token operator">=</span> <span class="token punctuation">{</span><span class="token string">"Ravi"</span><span class="token punctuation">,</span> <span class="token number">25</span><span class="token punctuation">}</span><span class="token punctuation">;</span>
    <span class="token function">printf</span><span class="token punctuation">(</span><span class="token string">"Age: %d\n"</span><span class="token punctuation">,</span> p1<span class="token punctuation">.</span>_____<span class="token punctuation">)</span><span class="token punctuation">;</span>  <span class="token comment">// Fill the blank</span>
    <span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span>
</code></pre><p><strong>Expected output:</strong></p><pre class="language-default" tabindex="0"><code class="language-default">Age: 25
</code></pre><div></div>