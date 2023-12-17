#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleCreateRequest)
namespace UnityEngine {
class AssetBundle;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundleCreateRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundleCreateRequest);
// Type: UnityEngine::AssetBundleCreateRequest
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10201))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16105))
// CS Name: ::UnityEngine::AssetBundleCreateRequest*
class CORDL_TYPE AssetBundleCreateRequest : public ::UnityEngine::AsyncOperation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::AsyncOperation)]{};

 __declspec(property(get=get_assetBundle)) ::UnityEngine::AssetBundle*  assetBundle;

/// @brief Method get_assetBundle addr 0x2c99f20 size 0x3c virtual false final false
inline ::UnityEngine::AssetBundle* get_assetBundle() ;

static inline ::UnityEngine::AssetBundleCreateRequest* New_ctor() ;

/// @brief Method .ctor addr 0x2c99f5c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleCreateRequest(AssetBundleCreateRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleCreateRequest(AssetBundleCreateRequest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetBundleCreateRequest()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleCreateRequest, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundleCreateRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleCreateRequest*, "UnityEngine", "AssetBundleCreateRequest");
