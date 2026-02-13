<h2><a href="https://www.codechef.com/learn/course/c/OKDOZDB/problems/CDEVPROB337">The role of break in C</a></h2><h4>Difficulty: </h4><p>What will be the output of the following C code?</p><pre class="language-c" tabindex="0"><code class="language-c"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string">&lt;stdio.h&gt;</span></span>

<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token punctuation">{</span>
    <span class="token keyword">int</span> num <span class="token operator">=</span> <span class="token number">2</span><span class="token punctuation">;</span>

    <span class="token keyword">switch</span> <span class="token punctuation">(</span>num<span class="token punctuation">)</span> <span class="token punctuation">{</span>
        <span class="token keyword">case</span> <span class="token number">1</span><span class="token operator">:</span>
            <span class="token function">printf</span><span class="token punctuation">(</span><span class="token string">"One\n"</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
            <span class="token keyword">break</span><span class="token punctuation">;</span>
        <span class="token keyword">case</span> <span class="token number">2</span><span class="token operator">:</span>
            <span class="token function">printf</span><span class="token punctuation">(</span><span class="token string">"Two\n"</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
            <span class="token keyword">break</span><span class="token punctuation">;</span>
        <span class="token keyword">case</span> <span class="token number">3</span><span class="token operator">:</span>
            <span class="token function">printf</span><span class="token punctuation">(</span><span class="token string">"Three\n"</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
            <span class="token keyword">break</span><span class="token punctuation">;</span>
        <span class="token keyword">default</span><span class="token operator">:</span>
            <span class="token function">printf</span><span class="token punctuation">(</span><span class="token string">"Other\n"</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
    <span class="token punctuation">}</span>

    <span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>
<span class="token punctuation">}</span>
</code></pre><div></div>