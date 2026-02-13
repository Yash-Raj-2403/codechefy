<h2><a href="https://www.codechef.com/learn/course/c/EPPRCTB/problems/CDEVPROB95">Final Value of result Using Assignment Operators</a></h2><h4>Difficulty: </h4><p>Given the following code snippet, what will be the final value of <code>result</code>?</p><pre class="language-c" tabindex="0"><code class="language-c"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string">&lt;stdio.h&gt;</span></span>

<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
    <span class="token keyword">int</span> result <span class="token operator">=</span> <span class="token number">10</span><span class="token punctuation">;</span>     
    result <span class="token operator">+=</span> <span class="token number">5</span><span class="token punctuation">;</span>         
    result <span class="token operator">+=</span> <span class="token number">3</span><span class="token punctuation">;</span>         
    result <span class="token operator">+=</span> <span class="token number">2</span><span class="token punctuation">;</span>         
    result <span class="token operator">-=</span> <span class="token number">4</span><span class="token punctuation">;</span>         
    <span class="token function">printf</span><span class="token punctuation">(</span><span class="token string">"Result: %d\n"</span><span class="token punctuation">,</span> result<span class="token punctuation">)</span><span class="token punctuation">;</span>
    <span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span>
</code></pre><div></div>