<h2><a href="https://www.codechef.com/learn/course/sql/SQ00LS02/problems/GSQ08?tab=statement">Alter table</a></h2><h4>Difficulty: </h4><div style="position: relative;"><div class="_audioContainer_41vv0_2 _dark_41vv0_45" style="width: fit-content;"><div class="_listen_41vv0_12 false"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _headphones_41vv0_52 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="HeadphonesIcon"><path d="M12 3c-4.97 0-9 4.03-9 9v7c0 1.1.9 2 2 2h4v-8H5v-1c0-3.87 3.13-7 7-7s7 3.13 7 7v1h-4v8h4c1.1 0 2-.9 2-2v-7c0-4.97-4.03-9-9-9"></path></svg><p>Listen</p></div></div><div class="_featureToolTip_ov6b9_2 _dark_ov6b9_59  notranslate" style="position: absolute; z-index: 11; display: none;"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeMedium _crossButton_ov6b9_29 css-q7mezt" focusable="false" aria-hidden="true" viewBox="0 0 24 24" data-testid="CloseIcon"><path d="M19 6.41 17.59 5 12 10.59 6.41 5 5 6.41 10.59 12 5 17.59 6.41 19 12 13.41 17.59 19 19 17.59 13.41 12z"></path></svg><p class="_toolTipHeading_ov6b9_39">Introducing Listen to Problem<span role="img" aria-label="sparkles">✨</span></p><p class="_toolTipPara_ov6b9_49">Don't want to read? Now you can listen to the problem!</p></div></div><img src="https://cdn.codechef.com/images/problems/GSQ08/a74590398f7dd0f5c34829b5dd2e3eae.gif" alt="image"><p>The <strong>ALTER</strong> statement is used to append a new column to an existing table. <br>
Below is the query to add a new column 'Department' and set a default value, to the existing table student.</p><pre class="language-sql" tabindex="0"><code class="language-sql">    <span class="token keyword">ALTER</span> <span class="token keyword">TABLE</span> student
    <span class="token keyword">ADD</span> <span class="token keyword">COLUMN</span> Department <span class="token keyword">TEXT</span> <span class="token keyword">default</span> <span class="token boolean">NULL</span><span class="token punctuation">;</span>
</code></pre><p>While altering the table we can either keep the newly added column blank or we could set a <strong>default</strong> value (as mentioned above) to it. Lets run the query by adding a default value to the newly added column.</p><h3>Task</h3><p>Original table has the following rows</p><pre class="language-sql" tabindex="0"><code class="language-sql">┌─────────────┬────────────────┬────────────┐
│ Employee_id │ Employee_Name  │ Department │
├─────────────┼────────────────┼────────────┤
│ <span class="token number">1</span>           │ Kayla Thompson │ Sales      │
│ <span class="token number">2</span>           │ Ethan Chen     │ Operations │
│ <span class="token number">3</span>           │ Julia Lee      │ Hr         │
└─────────────┴────────────────┴────────────┘
</code></pre><p>Write a query to do the following</p><ul>
<li>Add a column 'Designation' to the table 'employee' and set 'Null' as the default value.</li>
<li>Output the entire table.</li>
</ul><h3>Expected output</h3><pre class="language-sql" tabindex="0"><code class="language-sql">┌─────────────┬────────────────┬────────────┬─────────────┐
│ Employee_id │ Employee_Name  │ Department │ Designation │
├─────────────┼────────────────┼────────────┼─────────────┤
│ <span class="token number">1</span>           │ Kayla Thompson │ Sales      │ <span class="token boolean">NULL</span>        │
│ <span class="token number">2</span>           │ Ethan Chen     │ Operations │ <span class="token boolean">NULL</span>        │
│ <span class="token number">3</span>           │ Julia Lee      │ Hr         │ <span class="token boolean">NULL</span>        │
└─────────────┴────────────────┴────────────┴─────────────┘
</code></pre><h4>Video Explanation:</h4><div style="position: relative; width: 100%; padding-bottom: 56.25%; height: 0px;">
  <iframe loading="lazy" title="YouTube video player" src="https://www.youtube.com/embed/FD56yREst3I?autoplay=0&amp;loop=0&amp;controls=1" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; fullscreen" frameborder="0" allowfullscreen="" style="position: absolute; top: 0px; left: 0px; width: 100%; height: 100%;">
  </iframe>
</div><div></div>