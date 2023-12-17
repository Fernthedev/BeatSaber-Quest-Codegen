#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerPrefsException)
// Forward declare root types
namespace UnityEngine {
class PlayerPrefsException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PlayerPrefsException);
// Type: UnityEngine::PlayerPrefsException
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10039))
// CS Name: ::UnityEngine::PlayerPrefsException*
class CORDL_TYPE PlayerPrefsException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::UnityEngine::PlayerPrefsException* New_ctor(::StringW  error) ;

/// @brief Method .ctor addr 0x2c9e688 size 0x68 virtual false final false
inline void _ctor(::StringW  error) ;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefsException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPrefsException(PlayerPrefsException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefsException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPrefsException(PlayerPrefsException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayerPrefsException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerPrefsException, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::PlayerPrefsException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerPrefsException*, "UnityEngine", "PlayerPrefsException");
