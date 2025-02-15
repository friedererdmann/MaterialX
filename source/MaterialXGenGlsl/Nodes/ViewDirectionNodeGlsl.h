//
// Copyright Contributors to the MaterialX Project
// SPDX-License-Identifier: Apache-2.0
//

#ifndef MATERIALX_VIEWDIRECTIONNODEGLSL_H
#define MATERIALX_VIEWDIRECTIONNODEGLSL_H

#include <MaterialXGenGlsl/GlslShaderGenerator.h>

MATERIALX_NAMESPACE_BEGIN

/// ViewDirection node implementation for GLSL
class MX_GENGLSL_API ViewDirectionNodeGlsl : public GlslImplementation
{
  public:
    static ShaderNodeImplPtr create();

    void createVariables(const ShaderNode& node, GenContext& context, Shader& shader) const override;

    void emitFunctionCall(const ShaderNode& node, GenContext& context, ShaderStage& stage) const override;
};

MATERIALX_NAMESPACE_END

#endif
