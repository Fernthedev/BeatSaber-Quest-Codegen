#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncOptions)
namespace Oculus::Platform {
struct NetSyncVoipStreamMode;
}
// Forward declare root types
namespace Oculus::Platform {
class NetSyncOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::NetSyncOptions);
// Type: Oculus.Platform::NetSyncOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13340))
// CS Name: ::Oculus.Platform::NetSyncOptions*
class CORDL_TYPE NetSyncOptions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field Handle offset 0x10
 __declspec(property(get=__get_Handle, put=__set_Handle)) ::cordl_internals::intptr_t  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_Handle() ;

constexpr ::cordl_internals::intptr_t const& __get_Handle() const;

static inline ::Oculus::Platform::NetSyncOptions* New_ctor() ;

/// @brief Method .ctor addr 0x26f46f8 size 0x64 virtual false final false
inline void _ctor() ;

/// @brief Method SetVoipGroup addr 0x26f475c size 0x68 virtual false final false
inline void SetVoipGroup(::StringW  value) ;

/// @brief Method SetVoipStreamDefault addr 0x26f47c4 size 0x68 virtual false final false
inline void SetVoipStreamDefault(::Oculus::Platform::NetSyncVoipStreamMode  value) ;

/// @brief Method SetZoneId addr 0x26f482c size 0x68 virtual false final false
inline void SetZoneId(::StringW  value) ;

/// @brief Method op_Explicit addr 0x26f4894 size 0x58 virtual false final false
static inline ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(::Oculus::Platform::NetSyncOptions*  options) ;

/// @brief Method Finalize addr 0x26f48ec size 0xd4 virtual true final false
inline void Finalize() ;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetSyncOptions(NetSyncOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetSyncOptions(NetSyncOptions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetSyncOptions()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::NetSyncOptions, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::NetSyncOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::NetSyncOptions*, "Oculus.Platform", "NetSyncOptions");
