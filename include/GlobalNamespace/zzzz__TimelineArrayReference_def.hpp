#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelineArrayReference)
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class DirectionalLight;
}
namespace TMPro {
class TextMeshPro;
}
namespace GlobalNamespace {
struct __TimelineArrayReference__ArrayTypes;
}
// Forward declare root types
namespace GlobalNamespace {
struct __TimelineArrayReference__ArrayTypes;
}
namespace GlobalNamespace {
class TimelineArrayReference;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__TimelineArrayReference__ArrayTypes);
MARK_REF_PTR_T(::GlobalNamespace::TimelineArrayReference);
// Type: ::ArrayTypes
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6018))
// CS Name: ::TimelineArrayReference::ArrayTypes
struct CORDL_TYPE __TimelineArrayReference__ArrayTypes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____TimelineArrayReference__ArrayTypes_Unwrapped
enum struct ____TimelineArrayReference__ArrayTypes_Unwrapped : int32_t {
__E_TubeLight = static_cast<int32_t>(0x0),
__E_Transform = static_cast<int32_t>(0x1),
__E_Canvas = static_cast<int32_t>(0x2),
__E_TextMeshPro = static_cast<int32_t>(0x3),
__E_DirectionalLight = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field TubeLight value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const TubeLight;

/// @brief Field Transform value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const Transform;

/// @brief Field Canvas value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const Canvas;

/// @brief Field TextMeshPro value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const TextMeshPro;

/// @brief Field DirectionalLight value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const DirectionalLight;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TimelineArrayReference__ArrayTypes_Unwrapped () const noexcept {
return std::bit_cast<____TimelineArrayReference__ArrayTypes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TimelineArrayReference__ArrayTypes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimelineArrayReference__ArrayTypes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimelineArrayReference__ArrayTypes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TimelineArrayReference__ArrayTypes, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TimelineArrayReference
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6019))
// CS Name: ::TimelineArrayReference*
class CORDL_TYPE TimelineArrayReference : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ArrayTypes = ::GlobalNamespace::__TimelineArrayReference__ArrayTypes;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field arrayType offset 0x18
 __declspec(property(get=__get_arrayType, put=__set_arrayType)) ::GlobalNamespace::__TimelineArrayReference__ArrayTypes  arrayType;

/// @brief Field _tubeLightArray offset 0x20
 __declspec(property(get=__get__tubeLightArray, put=__set__tubeLightArray)) ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  _tubeLightArray;

/// @brief Field _canvasGroupArray offset 0x28
 __declspec(property(get=__get__canvasGroupArray, put=__set__canvasGroupArray)) ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>  _canvasGroupArray;

/// @brief Field _tmproArray offset 0x30
 __declspec(property(get=__get__tmproArray, put=__set__tmproArray)) ::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>  _tmproArray;

/// @brief Field _transformArray offset 0x38
 __declspec(property(get=__get__transformArray, put=__set__transformArray)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  _transformArray;

/// @brief Field _directionalLights offset 0x40
 __declspec(property(get=__get__directionalLights, put=__set__directionalLights)) ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>  _directionalLights;

constexpr void __set_arrayType(::GlobalNamespace::__TimelineArrayReference__ArrayTypes  value) ;

constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes& __get_arrayType() ;

constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const& __get_arrayType() const;

constexpr void __set__tubeLightArray(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& __get__tubeLightArray() ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& __get__tubeLightArray() const;

constexpr void __set__canvasGroupArray(::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>& __get__canvasGroupArray() ;

constexpr ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*> const& __get__canvasGroupArray() const;

constexpr void __set__tmproArray(::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>  value) ;

constexpr ::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>& __get__tmproArray() ;

constexpr ::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*> const& __get__tmproArray() const;

constexpr void __set__transformArray(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& __get__transformArray() ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& __get__transformArray() const;

constexpr void __set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>& __get__directionalLights() ;

constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*> const& __get__directionalLights() const;

static inline ::GlobalNamespace::TimelineArrayReference* New_ctor() ;

/// @brief Method .ctor addr 0x2317d00 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TimelineArrayReference", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimelineArrayReference(TimelineArrayReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimelineArrayReference", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimelineArrayReference(TimelineArrayReference const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimelineArrayReference()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimelineArrayReference, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TimelineArrayReference__ArrayTypes, "", "TimelineArrayReference/ArrayTypes");
NEED_NO_BOX(::GlobalNamespace::TimelineArrayReference);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelineArrayReference*, "", "TimelineArrayReference");
