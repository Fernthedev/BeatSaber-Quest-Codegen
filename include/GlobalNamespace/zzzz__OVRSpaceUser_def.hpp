#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpaceUser)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpaceUser;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpaceUser);
// Type: ::OVRSpaceUser
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8006))
// CS Name: ::OVRSpaceUser
struct CORDL_TYPE OVRSpaceUser : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _handle offset 0x0
 __declspec(property(get=__get__handle, put=__set__handle)) uint64_t  _handle;

 __declspec(property(get=get_Valid)) bool  Valid;

 __declspec(property(get=get_Id)) uint64_t  Id;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__handle(uint64_t  value) ;

constexpr uint64_t& __get__handle() ;

constexpr uint64_t const& __get__handle() const;

/// @brief Method get_Valid addr 0x2792de0 size 0x28 virtual false final false
inline bool get_Valid() ;

/// @brief Method .ctor addr 0x2792e08 size 0x68 virtual false final false
inline void _ctor(uint64_t  spaceUserId) ;

/// @brief Method get_Id addr 0x2792d44 size 0x7c virtual false final false
inline uint64_t get_Id() ;

/// @brief Method Dispose addr 0x2792e70 size 0x64 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_handle", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr OVRSpaceUser(uint64_t  _handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRSpaceUser(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRSpaceUser()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpaceUser, 0x8>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpaceUser, "", "OVRSpaceUser");
