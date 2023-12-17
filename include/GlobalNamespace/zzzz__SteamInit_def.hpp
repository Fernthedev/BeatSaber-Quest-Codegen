#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasePlatformInit_def.hpp"
CORDL_MODULE_EXPORT(SteamInit)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamInit);
// Type: ::SteamInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15978))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4043))
// CS Name: ::SteamInit*
class CORDL_TYPE SteamInit : public ::GlobalNamespace::BasePlatformInit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::BasePlatformInit)]{};

/// @brief Method InitializeInternalAsync addr 0x222ab48 size 0x68 virtual true final false
inline ::System::Threading::Tasks::Task_1<bool>* InitializeInternalAsync() ;

static inline ::GlobalNamespace::SteamInit* New_ctor() ;

/// @brief Method .ctor addr 0x222abb0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SteamInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamInit(SteamInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamInit(SteamInit const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SteamInit()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamInit, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamInit*, "", "SteamInit");
