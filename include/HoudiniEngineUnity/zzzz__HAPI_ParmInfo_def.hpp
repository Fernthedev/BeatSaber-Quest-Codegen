#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ParmInfo)
namespace HoudiniEngineUnity {
struct HAPI_ParmType;
}
namespace HoudiniEngineUnity {
struct HAPI_PrmScriptType;
}
namespace HoudiniEngineUnity {
struct HAPI_Permissions;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeType;
}
namespace HoudiniEngineUnity {
struct HAPI_ChoiceListType;
}
namespace HoudiniEngineUnity {
struct HAPI_RampType;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeFlags;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ParmInfo);
// Type: HoudiniEngineUnity::HAPI_ParmInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9734))
// CS Name: ::HoudiniEngineUnity::HAPI_ParmInfo
struct CORDL_TYPE HAPI_ParmInfo : public ::bs_hook::ValueTypeWrapper<0x90> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field id offset 0x0
 __declspec(property(get=__get_id, put=__set_id)) int32_t  id;

/// @brief Field parentId offset 0x4
 __declspec(property(get=__get_parentId, put=__set_parentId)) int32_t  parentId;

/// @brief Field childIndex offset 0x8
 __declspec(property(get=__get_childIndex, put=__set_childIndex)) int32_t  childIndex;

/// @brief Field type offset 0xc
 __declspec(property(get=__get_type, put=__set_type)) ::HoudiniEngineUnity::HAPI_ParmType  type;

/// @brief Field scriptType offset 0x10
 __declspec(property(get=__get_scriptType, put=__set_scriptType)) ::HoudiniEngineUnity::HAPI_PrmScriptType  scriptType;

/// @brief Field typeInfoSH offset 0x14
 __declspec(property(get=__get_typeInfoSH, put=__set_typeInfoSH)) int32_t  typeInfoSH;

/// @brief Field permissions offset 0x18
 __declspec(property(get=__get_permissions, put=__set_permissions)) ::HoudiniEngineUnity::HAPI_Permissions  permissions;

/// @brief Field tagCount offset 0x1c
 __declspec(property(get=__get_tagCount, put=__set_tagCount)) int32_t  tagCount;

/// @brief Field size offset 0x20
 __declspec(property(get=__get_size, put=__set_size)) int32_t  size;

/// @brief Field choiceListType offset 0x24
 __declspec(property(get=__get_choiceListType, put=__set_choiceListType)) ::HoudiniEngineUnity::HAPI_ChoiceListType  choiceListType;

/// @brief Field choiceCount offset 0x28
 __declspec(property(get=__get_choiceCount, put=__set_choiceCount)) int32_t  choiceCount;

/// @brief Field nameSH offset 0x2c
 __declspec(property(get=__get_nameSH, put=__set_nameSH)) int32_t  nameSH;

/// @brief Field labelSH offset 0x30
 __declspec(property(get=__get_labelSH, put=__set_labelSH)) int32_t  labelSH;

/// @brief Field templateNameSH offset 0x34
 __declspec(property(get=__get_templateNameSH, put=__set_templateNameSH)) int32_t  templateNameSH;

/// @brief Field helpSH offset 0x38
 __declspec(property(get=__get_helpSH, put=__set_helpSH)) int32_t  helpSH;

/// @brief Field hasMin offset 0x3c
 __declspec(property(get=__get_hasMin, put=__set_hasMin)) bool  hasMin;

/// @brief Field hasMax offset 0x3d
 __declspec(property(get=__get_hasMax, put=__set_hasMax)) bool  hasMax;

/// @brief Field hasUIMin offset 0x3e
 __declspec(property(get=__get_hasUIMin, put=__set_hasUIMin)) bool  hasUIMin;

/// @brief Field hasUIMax offset 0x3f
 __declspec(property(get=__get_hasUIMax, put=__set_hasUIMax)) bool  hasUIMax;

/// @brief Field min offset 0x40
 __declspec(property(get=__get_min, put=__set_min)) float_t  min;

/// @brief Field max offset 0x44
 __declspec(property(get=__get_max, put=__set_max)) float_t  max;

/// @brief Field UIMin offset 0x48
 __declspec(property(get=__get_UIMin, put=__set_UIMin)) float_t  UIMin;

/// @brief Field UIMax offset 0x4c
 __declspec(property(get=__get_UIMax, put=__set_UIMax)) float_t  UIMax;

/// @brief Field invisible offset 0x50
 __declspec(property(get=__get_invisible, put=__set_invisible)) bool  invisible;

/// @brief Field disabled offset 0x51
 __declspec(property(get=__get_disabled, put=__set_disabled)) bool  disabled;

/// @brief Field spare offset 0x52
 __declspec(property(get=__get_spare, put=__set_spare)) bool  spare;

/// @brief Field joinNext offset 0x53
 __declspec(property(get=__get_joinNext, put=__set_joinNext)) bool  joinNext;

/// @brief Field labelNone offset 0x54
 __declspec(property(get=__get_labelNone, put=__set_labelNone)) bool  labelNone;

/// @brief Field intValuesIndex offset 0x58
 __declspec(property(get=__get_intValuesIndex, put=__set_intValuesIndex)) int32_t  intValuesIndex;

/// @brief Field floatValuesIndex offset 0x5c
 __declspec(property(get=__get_floatValuesIndex, put=__set_floatValuesIndex)) int32_t  floatValuesIndex;

/// @brief Field stringValuesIndex offset 0x60
 __declspec(property(get=__get_stringValuesIndex, put=__set_stringValuesIndex)) int32_t  stringValuesIndex;

/// @brief Field choiceIndex offset 0x64
 __declspec(property(get=__get_choiceIndex, put=__set_choiceIndex)) int32_t  choiceIndex;

/// @brief Field inputNodeType offset 0x68
 __declspec(property(get=__get_inputNodeType, put=__set_inputNodeType)) ::HoudiniEngineUnity::HAPI_NodeType  inputNodeType;

/// @brief Field inputNodeFlag offset 0x6c
 __declspec(property(get=__get_inputNodeFlag, put=__set_inputNodeFlag)) ::HoudiniEngineUnity::HAPI_NodeFlags  inputNodeFlag;

/// @brief Field isChildOfMultiParm offset 0x70
 __declspec(property(get=__get_isChildOfMultiParm, put=__set_isChildOfMultiParm)) bool  isChildOfMultiParm;

/// @brief Field instanceNum offset 0x74
 __declspec(property(get=__get_instanceNum, put=__set_instanceNum)) int32_t  instanceNum;

/// @brief Field instanceLength offset 0x78
 __declspec(property(get=__get_instanceLength, put=__set_instanceLength)) int32_t  instanceLength;

/// @brief Field instanceCount offset 0x7c
 __declspec(property(get=__get_instanceCount, put=__set_instanceCount)) int32_t  instanceCount;

/// @brief Field instanceStartOffset offset 0x80
 __declspec(property(get=__get_instanceStartOffset, put=__set_instanceStartOffset)) int32_t  instanceStartOffset;

/// @brief Field rampType offset 0x84
 __declspec(property(get=__get_rampType, put=__set_rampType)) ::HoudiniEngineUnity::HAPI_RampType  rampType;

/// @brief Field visibilityConditionSH offset 0x88
 __declspec(property(get=__get_visibilityConditionSH, put=__set_visibilityConditionSH)) int32_t  visibilityConditionSH;

/// @brief Field disabledConditionSH offset 0x8c
 __declspec(property(get=__get_disabledConditionSH, put=__set_disabledConditionSH)) int32_t  disabledConditionSH;

constexpr void __set_id(int32_t  value) ;

constexpr int32_t& __get_id() ;

constexpr int32_t const& __get_id() const;

constexpr void __set_parentId(int32_t  value) ;

constexpr int32_t& __get_parentId() ;

constexpr int32_t const& __get_parentId() const;

constexpr void __set_childIndex(int32_t  value) ;

constexpr int32_t& __get_childIndex() ;

constexpr int32_t const& __get_childIndex() const;

constexpr void __set_type(::HoudiniEngineUnity::HAPI_ParmType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_ParmType& __get_type() ;

constexpr ::HoudiniEngineUnity::HAPI_ParmType const& __get_type() const;

constexpr void __set_scriptType(::HoudiniEngineUnity::HAPI_PrmScriptType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType& __get_scriptType() ;

constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType const& __get_scriptType() const;

constexpr void __set_typeInfoSH(int32_t  value) ;

constexpr int32_t& __get_typeInfoSH() ;

constexpr int32_t const& __get_typeInfoSH() const;

constexpr void __set_permissions(::HoudiniEngineUnity::HAPI_Permissions  value) ;

constexpr ::HoudiniEngineUnity::HAPI_Permissions& __get_permissions() ;

constexpr ::HoudiniEngineUnity::HAPI_Permissions const& __get_permissions() const;

constexpr void __set_tagCount(int32_t  value) ;

constexpr int32_t& __get_tagCount() ;

constexpr int32_t const& __get_tagCount() const;

constexpr void __set_size(int32_t  value) ;

constexpr int32_t& __get_size() ;

constexpr int32_t const& __get_size() const;

constexpr void __set_choiceListType(::HoudiniEngineUnity::HAPI_ChoiceListType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_ChoiceListType& __get_choiceListType() ;

constexpr ::HoudiniEngineUnity::HAPI_ChoiceListType const& __get_choiceListType() const;

constexpr void __set_choiceCount(int32_t  value) ;

constexpr int32_t& __get_choiceCount() ;

constexpr int32_t const& __get_choiceCount() const;

constexpr void __set_nameSH(int32_t  value) ;

constexpr int32_t& __get_nameSH() ;

constexpr int32_t const& __get_nameSH() const;

constexpr void __set_labelSH(int32_t  value) ;

constexpr int32_t& __get_labelSH() ;

constexpr int32_t const& __get_labelSH() const;

constexpr void __set_templateNameSH(int32_t  value) ;

constexpr int32_t& __get_templateNameSH() ;

constexpr int32_t const& __get_templateNameSH() const;

constexpr void __set_helpSH(int32_t  value) ;

constexpr int32_t& __get_helpSH() ;

constexpr int32_t const& __get_helpSH() const;

constexpr void __set_hasMin(bool  value) ;

constexpr bool& __get_hasMin() ;

constexpr bool const& __get_hasMin() const;

constexpr void __set_hasMax(bool  value) ;

constexpr bool& __get_hasMax() ;

constexpr bool const& __get_hasMax() const;

constexpr void __set_hasUIMin(bool  value) ;

constexpr bool& __get_hasUIMin() ;

constexpr bool const& __get_hasUIMin() const;

constexpr void __set_hasUIMax(bool  value) ;

constexpr bool& __get_hasUIMax() ;

constexpr bool const& __get_hasUIMax() const;

constexpr void __set_min(float_t  value) ;

constexpr float_t& __get_min() ;

constexpr float_t const& __get_min() const;

constexpr void __set_max(float_t  value) ;

constexpr float_t& __get_max() ;

constexpr float_t const& __get_max() const;

constexpr void __set_UIMin(float_t  value) ;

constexpr float_t& __get_UIMin() ;

constexpr float_t const& __get_UIMin() const;

constexpr void __set_UIMax(float_t  value) ;

constexpr float_t& __get_UIMax() ;

constexpr float_t const& __get_UIMax() const;

constexpr void __set_invisible(bool  value) ;

constexpr bool& __get_invisible() ;

constexpr bool const& __get_invisible() const;

constexpr void __set_disabled(bool  value) ;

constexpr bool& __get_disabled() ;

constexpr bool const& __get_disabled() const;

constexpr void __set_spare(bool  value) ;

constexpr bool& __get_spare() ;

constexpr bool const& __get_spare() const;

constexpr void __set_joinNext(bool  value) ;

constexpr bool& __get_joinNext() ;

constexpr bool const& __get_joinNext() const;

constexpr void __set_labelNone(bool  value) ;

constexpr bool& __get_labelNone() ;

constexpr bool const& __get_labelNone() const;

constexpr void __set_intValuesIndex(int32_t  value) ;

constexpr int32_t& __get_intValuesIndex() ;

constexpr int32_t const& __get_intValuesIndex() const;

constexpr void __set_floatValuesIndex(int32_t  value) ;

constexpr int32_t& __get_floatValuesIndex() ;

constexpr int32_t const& __get_floatValuesIndex() const;

constexpr void __set_stringValuesIndex(int32_t  value) ;

constexpr int32_t& __get_stringValuesIndex() ;

constexpr int32_t const& __get_stringValuesIndex() const;

constexpr void __set_choiceIndex(int32_t  value) ;

constexpr int32_t& __get_choiceIndex() ;

constexpr int32_t const& __get_choiceIndex() const;

constexpr void __set_inputNodeType(::HoudiniEngineUnity::HAPI_NodeType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_NodeType& __get_inputNodeType() ;

constexpr ::HoudiniEngineUnity::HAPI_NodeType const& __get_inputNodeType() const;

constexpr void __set_inputNodeFlag(::HoudiniEngineUnity::HAPI_NodeFlags  value) ;

constexpr ::HoudiniEngineUnity::HAPI_NodeFlags& __get_inputNodeFlag() ;

constexpr ::HoudiniEngineUnity::HAPI_NodeFlags const& __get_inputNodeFlag() const;

constexpr void __set_isChildOfMultiParm(bool  value) ;

constexpr bool& __get_isChildOfMultiParm() ;

constexpr bool const& __get_isChildOfMultiParm() const;

constexpr void __set_instanceNum(int32_t  value) ;

constexpr int32_t& __get_instanceNum() ;

constexpr int32_t const& __get_instanceNum() const;

constexpr void __set_instanceLength(int32_t  value) ;

constexpr int32_t& __get_instanceLength() ;

constexpr int32_t const& __get_instanceLength() const;

constexpr void __set_instanceCount(int32_t  value) ;

constexpr int32_t& __get_instanceCount() ;

constexpr int32_t const& __get_instanceCount() const;

constexpr void __set_instanceStartOffset(int32_t  value) ;

constexpr int32_t& __get_instanceStartOffset() ;

constexpr int32_t const& __get_instanceStartOffset() const;

constexpr void __set_rampType(::HoudiniEngineUnity::HAPI_RampType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_RampType& __get_rampType() ;

constexpr ::HoudiniEngineUnity::HAPI_RampType const& __get_rampType() const;

constexpr void __set_visibilityConditionSH(int32_t  value) ;

constexpr int32_t& __get_visibilityConditionSH() ;

constexpr int32_t const& __get_visibilityConditionSH() const;

constexpr void __set_disabledConditionSH(int32_t  value) ;

constexpr int32_t& __get_disabledConditionSH() ;

constexpr int32_t const& __get_disabledConditionSH() const;

/// @brief Method isInt addr 0x2191b78 size 0x20 virtual false final false
inline bool isInt() ;

/// @brief Method isFloat addr 0x2191b98 size 0x14 virtual false final false
inline bool isFloat() ;

/// @brief Method isString addr 0x2191bac size 0x30 virtual false final false
inline bool isString() ;

/// @brief Method isPath addr 0x2191bdc size 0x20 virtual false final false
inline bool isPath() ;

/// @brief Method isNode addr 0x2191bfc size 0x10 virtual false final false
inline bool isNode() ;

/// @brief Method isNonValue addr 0x2191c0c size 0x14 virtual false final false
inline bool isNonValue() ;

// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "childIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_ParmType", modifiers: "", def_value: None }, CppParam { name: "scriptType", ty: "::HoudiniEngineUnity::HAPI_PrmScriptType", modifiers: "", def_value: None }, CppParam { name: "typeInfoSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "permissions", ty: "::HoudiniEngineUnity::HAPI_Permissions", modifiers: "", def_value: None }, CppParam { name: "tagCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "choiceListType", ty: "::HoudiniEngineUnity::HAPI_ChoiceListType", modifiers: "", def_value: None }, CppParam { name: "choiceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "templateNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "helpSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasMin", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasMax", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasUIMin", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasUIMax", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "UIMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "UIMax", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "invisible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "disabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "spare", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "joinNext", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "labelNone", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "intValuesIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "floatValuesIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stringValuesIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "choiceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "inputNodeType", ty: "::HoudiniEngineUnity::HAPI_NodeType", modifiers: "", def_value: None }, CppParam { name: "inputNodeFlag", ty: "::HoudiniEngineUnity::HAPI_NodeFlags", modifiers: "", def_value: None }, CppParam { name: "isChildOfMultiParm", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "instanceNum", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceStartOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rampType", ty: "::HoudiniEngineUnity::HAPI_RampType", modifiers: "", def_value: None }, CppParam { name: "visibilityConditionSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "disabledConditionSH", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ParmInfo(int32_t  id, int32_t  parentId, int32_t  childIndex, ::HoudiniEngineUnity::HAPI_ParmType  type, ::HoudiniEngineUnity::HAPI_PrmScriptType  scriptType, int32_t  typeInfoSH, ::HoudiniEngineUnity::HAPI_Permissions  permissions, int32_t  tagCount, int32_t  size, ::HoudiniEngineUnity::HAPI_ChoiceListType  choiceListType, int32_t  choiceCount, int32_t  nameSH, int32_t  labelSH, int32_t  templateNameSH, int32_t  helpSH, bool  hasMin, bool  hasMax, bool  hasUIMin, bool  hasUIMax, float_t  min, float_t  max, float_t  UIMin, float_t  UIMax, bool  invisible, bool  disabled, bool  spare, bool  joinNext, bool  labelNone, int32_t  intValuesIndex, int32_t  floatValuesIndex, int32_t  stringValuesIndex, int32_t  choiceIndex, ::HoudiniEngineUnity::HAPI_NodeType  inputNodeType, ::HoudiniEngineUnity::HAPI_NodeFlags  inputNodeFlag, bool  isChildOfMultiParm, int32_t  instanceNum, int32_t  instanceLength, int32_t  instanceCount, int32_t  instanceStartOffset, ::HoudiniEngineUnity::HAPI_RampType  rampType, int32_t  visibilityConditionSH, int32_t  disabledConditionSH) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_ParmInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x90>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_ParmInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ParmInfo, 0x90>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ParmInfo, "HoudiniEngineUnity", "HAPI_ParmInfo");
