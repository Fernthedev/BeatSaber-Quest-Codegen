#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityWebRequestAssetBundle)
namespace UnityEngine {
struct CachedAssetBundle;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequestAssetBundle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::UnityWebRequestAssetBundle);
// Type: UnityEngine.Networking::UnityWebRequestAssetBundle
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16137))
// CS Name: ::UnityEngine.Networking::UnityWebRequestAssetBundle*
class CORDL_TYPE UnityWebRequestAssetBundle : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetAssetBundle addr 0x2eab97c size 0x8 virtual false final false
static inline ::UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::StringW  uri) ;

/// @brief Method GetAssetBundle addr 0x2eab984 size 0xc0 virtual false final false
static inline ::UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::StringW  uri, uint32_t  crc) ;

/// @brief Method GetAssetBundle addr 0x2eabaa8 size 0xf0 virtual false final false
static inline ::UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::StringW  uri, ::UnityEngine::CachedAssetBundle  cachedAssetBundle, uint32_t  crc) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAssetBundle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestAssetBundle(UnityWebRequestAssetBundle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAssetBundle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestAssetBundle(UnityWebRequestAssetBundle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityWebRequestAssetBundle()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequestAssetBundle, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::UnityWebRequestAssetBundle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequestAssetBundle*, "UnityEngine.Networking", "UnityWebRequestAssetBundle");
