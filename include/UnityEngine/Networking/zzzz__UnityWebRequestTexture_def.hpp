#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestTexture)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequestTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::UnityWebRequestTexture);
// Type: UnityEngine.Networking::UnityWebRequestTexture
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16140))
// CS Name: ::UnityEngine.Networking::UnityWebRequestTexture*
class CORDL_TYPE UnityWebRequestTexture : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetTexture addr 0x2eb0d48 size 0x8 virtual false final false
static inline ::UnityEngine::Networking::UnityWebRequest* GetTexture(::StringW  uri) ;

/// @brief Method GetTexture addr 0x2eb0d50 size 0xc0 virtual false final false
static inline ::UnityEngine::Networking::UnityWebRequest* GetTexture(::StringW  uri, bool  nonReadable) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestTexture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestTexture(UnityWebRequestTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestTexture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestTexture(UnityWebRequestTexture const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityWebRequestTexture()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequestTexture, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::UnityWebRequestTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequestTexture*, "UnityEngine.Networking", "UnityWebRequestTexture");
