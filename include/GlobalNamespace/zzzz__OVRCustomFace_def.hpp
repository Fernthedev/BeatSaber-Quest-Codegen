#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRFace_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRCustomFace)
namespace GlobalNamespace {
struct __OVRCustomFace__RetargetingType;
}
namespace GlobalNamespace {
struct __OVRFaceExpressions__FaceExpression;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRCustomFace__RetargetingType;
}
namespace GlobalNamespace {
class OVRCustomFace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRCustomFace__RetargetingType);
MARK_REF_PTR_T(::GlobalNamespace::OVRCustomFace);
// Type: ::RetargetingType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8087))
// CS Name: ::OVRCustomFace::RetargetingType
struct CORDL_TYPE __OVRCustomFace__RetargetingType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRCustomFace__RetargetingType_Unwrapped
enum struct ____OVRCustomFace__RetargetingType_Unwrapped : int32_t {
__E_OculusFace = static_cast<int32_t>(0x0),
__E_Custom = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OculusFace value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRCustomFace__RetargetingType const OculusFace;

/// @brief Field Custom value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRCustomFace__RetargetingType const Custom;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRCustomFace__RetargetingType_Unwrapped () const noexcept {
return std::bit_cast<____OVRCustomFace__RetargetingType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRCustomFace__RetargetingType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRCustomFace__RetargetingType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRCustomFace__RetargetingType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRCustomFace__RetargetingType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRCustomFace
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8107))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8088))
// CS Name: ::OVRCustomFace*
class CORDL_TYPE OVRCustomFace : public ::GlobalNamespace::OVRFace {
public:
// Declarations
using RetargetingType = ::GlobalNamespace::__OVRCustomFace__RetargetingType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::OVRFace)]{};

/// @brief Field _mappings offset 0x30
 __declspec(property(get=__get__mappings, put=__set__mappings)) ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>  _mappings;

/// @brief Field retargetingType offset 0x38
 __declspec(property(get=__get_retargetingType, put=__set_retargetingType)) ::GlobalNamespace::__OVRCustomFace__RetargetingType  retargetingType;

/// @brief Field _allowDuplicateMapping offset 0x3c
 __declspec(property(get=__get__allowDuplicateMapping, put=__set__allowDuplicateMapping)) bool  _allowDuplicateMapping;

 __declspec(property(get=get_Mappings, put=set_Mappings)) ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>  Mappings;

 __declspec(property(get=get_RetargetingValue, put=set_RetargetingValue)) ::GlobalNamespace::__OVRCustomFace__RetargetingType  RetargetingValue;

 __declspec(property(get=get_AllowDuplicateMapping, put=set_AllowDuplicateMapping)) bool  AllowDuplicateMapping;

constexpr void __set__mappings(::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>& __get__mappings() ;

constexpr ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> const& __get__mappings() const;

constexpr void __set_retargetingType(::GlobalNamespace::__OVRCustomFace__RetargetingType  value) ;

constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType& __get_retargetingType() ;

constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType const& __get_retargetingType() const;

constexpr void __set__allowDuplicateMapping(bool  value) ;

constexpr bool& __get__allowDuplicateMapping() ;

constexpr bool const& __get__allowDuplicateMapping() const;

/// @brief Method get_Mappings addr 0x27a8c84 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> get_Mappings() ;

/// @brief Method set_Mappings addr 0x27a8c8c size 0x8 virtual false final false
inline void set_Mappings(::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>  value) ;

/// @brief Method get_RetargetingValue addr 0x27a8c94 size 0x8 virtual false final false
inline ::GlobalNamespace::__OVRCustomFace__RetargetingType get_RetargetingValue() ;

/// @brief Method set_RetargetingValue addr 0x27a8c9c size 0x8 virtual false final false
inline void set_RetargetingValue(::GlobalNamespace::__OVRCustomFace__RetargetingType  value) ;

/// @brief Method get_AllowDuplicateMapping addr 0x27a8ca4 size 0x8 virtual false final false
inline bool get_AllowDuplicateMapping() ;

/// @brief Method set_AllowDuplicateMapping addr 0x27a8cac size 0xc virtual false final false
inline void set_AllowDuplicateMapping(bool  value) ;

/// @brief Method Start addr 0x27a8cb8 size 0x4 virtual true final false
inline void Start() ;

/// @brief Method GetFaceExpression addr 0x27a8d0c size 0x30 virtual true final false
inline ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GetFaceExpression(int32_t  blendShapeIndex) ;

/// @brief Method GetCustomBlendShapeNameAndExpressionPairs addr 0x27a8d3c size 0x138 virtual true final false
inline ::System::ValueTuple_2<::ArrayW<::StringW,::Array<::StringW>*>,::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>> GetCustomBlendShapeNameAndExpressionPairs() ;

static inline ::GlobalNamespace::OVRCustomFace* New_ctor() ;

/// @brief Method .ctor addr 0x27a8e74 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomFace", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRCustomFace(OVRCustomFace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomFace", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRCustomFace(OVRCustomFace const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRCustomFace()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCustomFace, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRCustomFace__RetargetingType, "", "OVRCustomFace/RetargetingType");
NEED_NO_BOX(::GlobalNamespace::OVRCustomFace);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCustomFace*, "", "OVRCustomFace");
