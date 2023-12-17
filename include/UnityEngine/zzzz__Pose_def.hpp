#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Pose)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine {
struct Pose;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Pose);
// Type: UnityEngine::Pose
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10057))
// CS Name: ::UnityEngine::Pose
struct CORDL_TYPE Pose : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation offset 0xc
 __declspec(property(get=__get_rotation, put=__set_rotation)) ::UnityEngine::Quaternion  rotation;

 __declspec(property(get=get_forward)) ::UnityEngine::Vector3  forward;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Pose>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Pose>*() ;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_rotation() ;

constexpr ::UnityEngine::Quaternion const& __get_rotation() const;

static inline void setStaticF_k_Identity(::UnityEngine::Pose  value) ;

static inline ::UnityEngine::Pose getStaticF_k_Identity() ;

/// @brief Method .ctor addr 0x2ca1c7c size 0x14 virtual false final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method ToString addr 0x2ca1c90 size 0xf4 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetTransformedBy addr 0x2ca1d84 size 0xe4 virtual false final false
inline ::UnityEngine::Pose GetTransformedBy(::UnityEngine::Pose  lhs) ;

/// @brief Method get_forward addr 0x2ca1e68 size 0x70 virtual false final false
inline ::UnityEngine::Vector3 get_forward() ;

/// @brief Method get_identity addr 0x2ca1ed8 size 0x68 virtual false final false
static inline ::UnityEngine::Pose get_identity() ;

/// @brief Method Equals addr 0x2ca1f40 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2ca1fd0 size 0x84 virtual true final true
inline bool Equals(::UnityEngine::Pose  other) ;

/// @brief Method GetHashCode addr 0x2ca2054 size 0xac virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr Pose(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Pose(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Pose()  = default;


// Fields

// Static field k_Identity


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Pose, 0x1c>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Pose, "UnityEngine", "Pose");
