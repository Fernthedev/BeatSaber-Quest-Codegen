#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BundledAssetProvider)
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __BundledAssetProvider__InternalOp;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AssetBundleRequest;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class BundledAssetProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __BundledAssetProvider__InternalOp;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp);
// Type: ::InternalOp
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13996))
// CS Name: ::BundledAssetProvider::InternalOp*
class CORDL_TYPE __BundledAssetProvider__InternalOp : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field m_AssetBundle offset 0x10
 __declspec(property(get=__get_m_AssetBundle, put=__set_m_AssetBundle)) ::UnityEngine::AssetBundle*  m_AssetBundle;

/// @brief Field m_PreloadRequest offset 0x18
 __declspec(property(get=__get_m_PreloadRequest, put=__set_m_PreloadRequest)) ::UnityEngine::AssetBundleRequest*  m_PreloadRequest;

/// @brief Field m_RequestOperation offset 0x20
 __declspec(property(get=__get_m_RequestOperation, put=__set_m_RequestOperation)) ::UnityEngine::AssetBundleRequest*  m_RequestOperation;

/// @brief Field m_Result offset 0x28
 __declspec(property(get=__get_m_Result, put=__set_m_Result)) ::System::Object*  m_Result;

/// @brief Field m_ProvideHandle offset 0x30
 __declspec(property(get=__get_m_ProvideHandle, put=__set_m_ProvideHandle)) ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  m_ProvideHandle;

/// @brief Field subObjectName offset 0x48
 __declspec(property(get=__get_subObjectName, put=__set_subObjectName)) ::StringW  subObjectName;

constexpr void __set_m_AssetBundle(::UnityEngine::AssetBundle*  value) ;

constexpr ::UnityEngine::AssetBundle* __get_m_AssetBundle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundle*> __get_m_AssetBundle() const;

constexpr void __set_m_PreloadRequest(::UnityEngine::AssetBundleRequest*  value) ;

constexpr ::UnityEngine::AssetBundleRequest* __get_m_PreloadRequest() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> __get_m_PreloadRequest() const;

constexpr void __set_m_RequestOperation(::UnityEngine::AssetBundleRequest*  value) ;

constexpr ::UnityEngine::AssetBundleRequest* __get_m_RequestOperation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> __get_m_RequestOperation() const;

constexpr void __set_m_Result(::System::Object*  value) ;

constexpr ::System::Object* __get_m_Result() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_m_Result() const;

constexpr void __set_m_ProvideHandle(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __get_m_ProvideHandle() ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __get_m_ProvideHandle() const;

constexpr void __set_subObjectName(::StringW  value) ;

constexpr ::StringW& __get_subObjectName() ;

constexpr ::StringW const& __get_subObjectName() const;

/// @brief Method LoadBundleFromDependecies addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T LoadBundleFromDependecies(::System::Collections::Generic::IList_1<::System::Object*>*  results) ;

/// @brief Method Start addr 0x2bd5f10 size 0x3c8 virtual false final false
inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  provideHandle) ;

/// @brief Method BeginAssetLoad addr 0x2bd6394 size 0x368 virtual false final false
inline void BeginAssetLoad() ;

/// @brief Method WaitForCompletionHandler addr 0x2bd693c size 0xf8 virtual false final false
inline bool WaitForCompletionHandler() ;

/// @brief Method ActionComplete addr 0x2bd67a8 size 0x194 virtual false final false
inline void ActionComplete(::UnityEngine::AsyncOperation*  obj) ;

/// @brief Method GetArrayResult addr 0x2bd6a34 size 0x30 virtual false final false
inline void GetArrayResult(::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  allAssets) ;

/// @brief Method GetListResult addr 0x2bd6a64 size 0x30 virtual false final false
inline void GetListResult(::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  allAssets) ;

/// @brief Method GetAssetResult addr 0x2bd6a94 size 0xc0 virtual false final false
inline void GetAssetResult(::UnityEngine::Object*  asset) ;

/// @brief Method GetAssetSubObjectResult addr 0x2bd6b54 size 0xcc virtual false final false
inline void GetAssetSubObjectResult(::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  allAssets) ;

/// @brief Method CompleteOperation addr 0x2bd6c20 size 0xf0 virtual false final false
inline void CompleteOperation() ;

/// @brief Method ProgressCallback addr 0x2bd6d10 size 0x18 virtual false final false
inline float_t ProgressCallback() ;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp* New_ctor() ;

/// @brief Method .ctor addr 0x2bd5f08 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Start>b__7_0 addr 0x2bd6d28 size 0x4 virtual false final false
inline void _Start_b__7_0(::UnityEngine::AsyncOperation*  operation) ;

// Ctor Parameters [CppParam { name: "", ty: "__BundledAssetProvider__InternalOp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BundledAssetProvider__InternalOp(__BundledAssetProvider__InternalOp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BundledAssetProvider__InternalOp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BundledAssetProvider__InternalOp(__BundledAssetProvider__InternalOp const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BundledAssetProvider__InternalOp()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::BundledAssetProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13997))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::BundledAssetProvider*
class CORDL_TYPE BundledAssetProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
// Declarations
using InternalOp = ::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase)]{};

/// @brief Method Provide addr 0x2bd5e88 size 0x80 virtual true final false
inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  provideHandle) ;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider* New_ctor() ;

/// @brief Method .ctor addr 0x2bd62d8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BundledAssetProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BundledAssetProvider(BundledAssetProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BundledAssetProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BundledAssetProvider(BundledAssetProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BundledAssetProvider()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "BundledAssetProvider");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "BundledAssetProvider/InternalOp");
