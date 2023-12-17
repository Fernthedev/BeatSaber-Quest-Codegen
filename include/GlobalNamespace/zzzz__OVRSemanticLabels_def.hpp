#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSemanticLabels)
namespace GlobalNamespace {
template<typename T>
class IOVRAnchorComponent_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSemanticLabels;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSemanticLabels);
// Type: ::OVRSemanticLabels
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7518))
// CS Name: ::OVRSemanticLabels
struct CORDL_TYPE OVRSemanticLabels : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <Handle>k__BackingField offset 0x0
 __declspec(property(get=__get__Handle_k__BackingField, put=__set__Handle_k__BackingField)) uint64_t  _Handle_k__BackingField;

 __declspec(property(get=IOVRAnchorComponent_OVRSemanticLabels__get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType  IOVRAnchorComponent_OVRSemanticLabels__Type;

 __declspec(property(get=IOVRAnchorComponent_OVRSemanticLabels__get_Handle)) uint64_t  IOVRAnchorComponent_OVRSemanticLabels__Handle;

 __declspec(property(get=get_IsNull)) bool  IsNull;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType  Type;

 __declspec(property(get=get_Handle)) uint64_t  Handle;

 __declspec(property(get=get_Labels)) ::StringW  Labels;

/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>"
constexpr operator  ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>*() ;

static inline void setStaticF_Null(::GlobalNamespace::OVRSemanticLabels  value) ;

static inline ::GlobalNamespace::OVRSemanticLabels getStaticF_Null() ;

constexpr void __set__Handle_k__BackingField(uint64_t  value) ;

constexpr uint64_t& __get__Handle_k__BackingField() ;

constexpr uint64_t const& __get__Handle_k__BackingField() const;

/// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.get_Type addr 0x2714020 size 0x8 virtual true final true
inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRSemanticLabels__get_Type() ;

/// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.get_Handle addr 0x2714030 size 0x8 virtual true final true
inline uint64_t IOVRAnchorComponent_OVRSemanticLabels__get_Handle() ;

/// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.FromAnchor addr 0x2714038 size 0x8 virtual true final true
inline ::GlobalNamespace::OVRSemanticLabels IOVRAnchorComponent_OVRSemanticLabels__FromAnchor(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method get_IsNull addr 0x271404c size 0x10 virtual true final true
inline bool get_IsNull() ;

/// @brief Method get_IsEnabled addr 0x271405c size 0xa8 virtual true final true
inline bool get_IsEnabled() ;

/// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.SetEnabledAsync addr 0x2714104 size 0x50 virtual true final true
inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRSemanticLabels__SetEnabledAsync(bool  enabled, double_t  timeout) ;

/// @brief Method Equals addr 0x2714154 size 0x10 virtual true final true
inline bool Equals(::GlobalNamespace::OVRSemanticLabels  other) ;

/// @brief Method op_Equality addr 0x2714164 size 0xc virtual false final false
static inline bool op_Equality(::GlobalNamespace::OVRSemanticLabels  lhs, ::GlobalNamespace::OVRSemanticLabels  rhs) ;

/// @brief Method op_Inequality addr 0x2714170 size 0xc virtual false final false
static inline bool op_Inequality(::GlobalNamespace::OVRSemanticLabels  lhs, ::GlobalNamespace::OVRSemanticLabels  rhs) ;

/// @brief Method Equals addr 0x271417c size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x27141f4 size 0x4c virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2714240 size 0x84 virtual true final false
inline ::StringW ToString() ;

/// @brief Method get_Type addr 0x2714028 size 0x8 virtual false final false
inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type() ;

/// @brief Method get_Handle addr 0x27142c4 size 0x8 virtual false final false
inline uint64_t get_Handle() ;

/// @brief Method .ctor addr 0x2714040 size 0xc virtual false final false
inline void _ctor(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method get_Labels addr 0x27142cc size 0xcc virtual false final false
inline ::StringW get_Labels() ;

// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr OVRSemanticLabels(uint64_t  _Handle_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRSemanticLabels(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRSemanticLabels()  = default;


// Fields

// Static field Null


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSemanticLabels, 0x8>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSemanticLabels, "", "OVRSemanticLabels");
