#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestUtilities)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::Util {
class UnityWebRequestResult;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class UnityWebRequestUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities);
// Type: UnityEngine.ResourceManagement.Util::UnityWebRequestUtilities
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13986))
// CS Name: ::UnityEngine.ResourceManagement.Util::UnityWebRequestUtilities*
class CORDL_TYPE UnityWebRequestUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method RequestHasErrors addr 0x2bd3170 size 0x138 virtual false final false
static inline bool RequestHasErrors(::UnityEngine::Networking::UnityWebRequest*  webReq, ByRef<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>  result) ;

/// @brief Method IsAssetBundleDownloaded addr 0x2bcfa94 size 0xa4 virtual false final false
static inline bool IsAssetBundleDownloaded(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  op) ;

static inline ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities* New_ctor() ;

/// @brief Method .ctor addr 0x2bd33b0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestUtilities(UnityWebRequestUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestUtilities(UnityWebRequestUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityWebRequestUtilities()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*, "UnityEngine.ResourceManagement.Util", "UnityWebRequestUtilities");
