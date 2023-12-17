#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AssetBundleRequest)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundleRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundleRequest);
// Type: UnityEngine::AssetBundleRequest
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10262))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16104))
// CS Name: ::UnityEngine::AssetBundleRequest*
class CORDL_TYPE AssetBundleRequest : public ::UnityEngine::ResourceRequest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::ResourceRequest)]{};

 __declspec(property(get=get_asset)) ::UnityEngine::Object*  asset;

 __declspec(property(get=get_allAssets)) ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  allAssets;

/// @brief Method GetResult addr 0x2c99e94 size 0x3c virtual true final false
inline ::UnityEngine::Object* GetResult() ;

/// @brief Method get_asset addr 0x2c99ed0 size 0xc virtual false final false
inline ::UnityEngine::Object* get_asset() ;

/// @brief Method get_allAssets addr 0x2c99edc size 0x3c virtual false final false
inline ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*> get_allAssets() ;

static inline ::UnityEngine::AssetBundleRequest* New_ctor() ;

/// @brief Method .ctor addr 0x2c99f18 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleRequest(AssetBundleRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleRequest(AssetBundleRequest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetBundleRequest()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleRequest, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundleRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleRequest*, "UnityEngine", "AssetBundleRequest");
