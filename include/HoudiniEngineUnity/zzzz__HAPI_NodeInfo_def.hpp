#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_NodeInfo)
namespace HoudiniEngineUnity {
struct HAPI_NodeType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_NodeInfo);
// Type: HoudiniEngineUnity::HAPI_NodeInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9733))
// CS Name: ::HoudiniEngineUnity::HAPI_NodeInfo
struct CORDL_TYPE HAPI_NodeInfo : public ::bs_hook::ValueTypeWrapper<0x44> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x44};

/// @brief Field id offset 0x0
 __declspec(property(get=__get_id, put=__set_id)) int32_t  id;

/// @brief Field parentId offset 0x4
 __declspec(property(get=__get_parentId, put=__set_parentId)) int32_t  parentId;

/// @brief Field nameSH offset 0x8
 __declspec(property(get=__get_nameSH, put=__set_nameSH)) int32_t  nameSH;

/// @brief Field type offset 0xc
 __declspec(property(get=__get_type, put=__set_type)) ::HoudiniEngineUnity::HAPI_NodeType  type;

/// @brief Field isValid offset 0x10
 __declspec(property(get=__get_isValid, put=__set_isValid)) bool  isValid;

/// @brief Field totalCookCount offset 0x14
 __declspec(property(get=__get_totalCookCount, put=__set_totalCookCount)) int32_t  totalCookCount;

/// @brief Field uniqueHoudiniNodeId offset 0x18
 __declspec(property(get=__get_uniqueHoudiniNodeId, put=__set_uniqueHoudiniNodeId)) int32_t  uniqueHoudiniNodeId;

/// @brief Field internalNodePathSH offset 0x1c
 __declspec(property(get=__get_internalNodePathSH, put=__set_internalNodePathSH)) int32_t  internalNodePathSH;

/// @brief Field parmCount offset 0x20
 __declspec(property(get=__get_parmCount, put=__set_parmCount)) int32_t  parmCount;

/// @brief Field parmIntValueCount offset 0x24
 __declspec(property(get=__get_parmIntValueCount, put=__set_parmIntValueCount)) int32_t  parmIntValueCount;

/// @brief Field parmFloatValueCount offset 0x28
 __declspec(property(get=__get_parmFloatValueCount, put=__set_parmFloatValueCount)) int32_t  parmFloatValueCount;

/// @brief Field parmStringValueCount offset 0x2c
 __declspec(property(get=__get_parmStringValueCount, put=__set_parmStringValueCount)) int32_t  parmStringValueCount;

/// @brief Field parmChoiceCount offset 0x30
 __declspec(property(get=__get_parmChoiceCount, put=__set_parmChoiceCount)) int32_t  parmChoiceCount;

/// @brief Field childNodeCount offset 0x34
 __declspec(property(get=__get_childNodeCount, put=__set_childNodeCount)) int32_t  childNodeCount;

/// @brief Field inputCount offset 0x38
 __declspec(property(get=__get_inputCount, put=__set_inputCount)) int32_t  inputCount;

/// @brief Field outputCount offset 0x3c
 __declspec(property(get=__get_outputCount, put=__set_outputCount)) int32_t  outputCount;

/// @brief Field createdPostAssetLoad offset 0x40
 __declspec(property(get=__get_createdPostAssetLoad, put=__set_createdPostAssetLoad)) bool  createdPostAssetLoad;

/// @brief Field isTimeDependent offset 0x41
 __declspec(property(get=__get_isTimeDependent, put=__set_isTimeDependent)) bool  isTimeDependent;

constexpr void __set_id(int32_t  value) ;

constexpr int32_t& __get_id() ;

constexpr int32_t const& __get_id() const;

constexpr void __set_parentId(int32_t  value) ;

constexpr int32_t& __get_parentId() ;

constexpr int32_t const& __get_parentId() const;

constexpr void __set_nameSH(int32_t  value) ;

constexpr int32_t& __get_nameSH() ;

constexpr int32_t const& __get_nameSH() const;

constexpr void __set_type(::HoudiniEngineUnity::HAPI_NodeType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_NodeType& __get_type() ;

constexpr ::HoudiniEngineUnity::HAPI_NodeType const& __get_type() const;

constexpr void __set_isValid(bool  value) ;

constexpr bool& __get_isValid() ;

constexpr bool const& __get_isValid() const;

constexpr void __set_totalCookCount(int32_t  value) ;

constexpr int32_t& __get_totalCookCount() ;

constexpr int32_t const& __get_totalCookCount() const;

constexpr void __set_uniqueHoudiniNodeId(int32_t  value) ;

constexpr int32_t& __get_uniqueHoudiniNodeId() ;

constexpr int32_t const& __get_uniqueHoudiniNodeId() const;

constexpr void __set_internalNodePathSH(int32_t  value) ;

constexpr int32_t& __get_internalNodePathSH() ;

constexpr int32_t const& __get_internalNodePathSH() const;

constexpr void __set_parmCount(int32_t  value) ;

constexpr int32_t& __get_parmCount() ;

constexpr int32_t const& __get_parmCount() const;

constexpr void __set_parmIntValueCount(int32_t  value) ;

constexpr int32_t& __get_parmIntValueCount() ;

constexpr int32_t const& __get_parmIntValueCount() const;

constexpr void __set_parmFloatValueCount(int32_t  value) ;

constexpr int32_t& __get_parmFloatValueCount() ;

constexpr int32_t const& __get_parmFloatValueCount() const;

constexpr void __set_parmStringValueCount(int32_t  value) ;

constexpr int32_t& __get_parmStringValueCount() ;

constexpr int32_t const& __get_parmStringValueCount() const;

constexpr void __set_parmChoiceCount(int32_t  value) ;

constexpr int32_t& __get_parmChoiceCount() ;

constexpr int32_t const& __get_parmChoiceCount() const;

constexpr void __set_childNodeCount(int32_t  value) ;

constexpr int32_t& __get_childNodeCount() ;

constexpr int32_t const& __get_childNodeCount() const;

constexpr void __set_inputCount(int32_t  value) ;

constexpr int32_t& __get_inputCount() ;

constexpr int32_t const& __get_inputCount() const;

constexpr void __set_outputCount(int32_t  value) ;

constexpr int32_t& __get_outputCount() ;

constexpr int32_t const& __get_outputCount() const;

constexpr void __set_createdPostAssetLoad(bool  value) ;

constexpr bool& __get_createdPostAssetLoad() ;

constexpr bool const& __get_createdPostAssetLoad() const;

constexpr void __set_isTimeDependent(bool  value) ;

constexpr bool& __get_isTimeDependent() ;

constexpr bool const& __get_isTimeDependent() const;

// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_NodeType", modifiers: "", def_value: None }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "totalCookCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uniqueHoudiniNodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "internalNodePathSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmIntValueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmFloatValueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmStringValueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmChoiceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "childNodeCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "inputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "outputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "createdPostAssetLoad", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isTimeDependent", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_NodeInfo(int32_t  id, int32_t  parentId, int32_t  nameSH, ::HoudiniEngineUnity::HAPI_NodeType  type, bool  isValid, int32_t  totalCookCount, int32_t  uniqueHoudiniNodeId, int32_t  internalNodePathSH, int32_t  parmCount, int32_t  parmIntValueCount, int32_t  parmFloatValueCount, int32_t  parmStringValueCount, int32_t  parmChoiceCount, int32_t  childNodeCount, int32_t  inputCount, int32_t  outputCount, bool  createdPostAssetLoad, bool  isTimeDependent) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_NodeInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x44>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_NodeInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_NodeInfo, 0x44>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_NodeInfo, "HoudiniEngineUnity", "HAPI_NodeInfo");
