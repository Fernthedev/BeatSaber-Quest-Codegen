#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateCatalogsOperation)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::AddressableAssets {
class __UpdateCatalogsOperation____c;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::AddressableAssets {
class __UpdateCatalogsOperation____c__DisplayClass11_0;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl__ResourceLocatorInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class UpdateCatalogsOperation;
}
namespace UnityEngine::AddressableAssets {
class __UpdateCatalogsOperation____c;
}
namespace UnityEngine::AddressableAssets {
class __UpdateCatalogsOperation____c__DisplayClass11_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::UpdateCatalogsOperation);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c__DisplayClass11_0);
// Type: ::<>c
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14094))
// CS Name: ::UpdateCatalogsOperation::<>c*
class CORDL_TYPE __UpdateCatalogsOperation____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c*  value) ;

static inline ::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c* getStaticF___9() ;

static inline void setStaticF___9__6_0(::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*,bool>*  value) ;

static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*,bool>* getStaticF___9__6_0() ;

static inline ::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c* New_ctor() ;

/// @brief Method .ctor addr 0x2a27038 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Start>b__6_0 addr 0x2a27040 size 0x9c virtual false final false
inline bool _Start_b__6_0(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*  rp) ;

// Ctor Parameters [CppParam { name: "", ty: "__UpdateCatalogsOperation____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UpdateCatalogsOperation____c(__UpdateCatalogsOperation____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UpdateCatalogsOperation____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UpdateCatalogsOperation____c(__UpdateCatalogsOperation____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UpdateCatalogsOperation____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__6_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass11_0
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14095))
// CS Name: ::UpdateCatalogsOperation::<>c__DisplayClass11_0*
class CORDL_TYPE __UpdateCatalogsOperation____c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::UnityEngine::AddressableAssets::UpdateCatalogsOperation*  __4__this;

/// @brief Field catalogs offset 0x18
 __declspec(property(get=__get_catalogs, put=__set_catalogs)) ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*  catalogs;

constexpr void __set___4__this(::UnityEngine::AddressableAssets::UpdateCatalogsOperation*  value) ;

constexpr ::UnityEngine::AddressableAssets::UpdateCatalogsOperation* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*> __get___4__this() const;

constexpr void __set_catalogs(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* __get_catalogs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> __get_catalogs() const;

static inline ::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c__DisplayClass11_0* New_ctor() ;

/// @brief Method .ctor addr 0x2a26fcc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <OnCleanCacheCompleted>b__0 addr 0x2a270dc size 0x190 virtual false final false
inline void _OnCleanCacheCompleted_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  obj) ;

// Ctor Parameters [CppParam { name: "", ty: "__UpdateCatalogsOperation____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UpdateCatalogsOperation____c__DisplayClass11_0(__UpdateCatalogsOperation____c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UpdateCatalogsOperation____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UpdateCatalogsOperation____c__DisplayClass11_0(__UpdateCatalogsOperation____c__DisplayClass11_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UpdateCatalogsOperation____c__DisplayClass11_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c__DisplayClass11_0, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
// Type: UnityEngine.AddressableAssets::UpdateCatalogsOperation
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3843), inst: 796 }), TypeDefinitionIndex(TypeDefinitionIndex(14112)), TypeDefinitionIndex(TypeDefinitionIndex(14032)), TypeDefinitionIndex(TypeDefinitionIndex(3843)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 794 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14096))
// CS Name: ::UnityEngine.AddressableAssets::UpdateCatalogsOperation*
class CORDL_TYPE UpdateCatalogsOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> {
public:
// Declarations
using __c__DisplayClass11_0 = ::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c__DisplayClass11_0;

using __c = ::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xe0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xe0 - sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>)]{};

/// @brief Field m_Addressables offset 0x88
 __declspec(property(get=__get_m_Addressables, put=__set_m_Addressables)) ::UnityEngine::AddressableAssets::AddressablesImpl*  m_Addressables;

/// @brief Field m_LocatorInfos offset 0x90
 __declspec(property(get=__get_m_LocatorInfos, put=__set_m_LocatorInfos)) ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>*  m_LocatorInfos;

/// @brief Field m_DepOp offset 0x98
 __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  m_DepOp;

/// @brief Field m_CleanCacheOp offset 0xb8
 __declspec(property(get=__get_m_CleanCacheOp, put=__set_m_CleanCacheOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  m_CleanCacheOp;

/// @brief Field m_AutoCleanBundleCache offset 0xd8
 __declspec(property(get=__get_m_AutoCleanBundleCache, put=__set_m_AutoCleanBundleCache)) bool  m_AutoCleanBundleCache;

constexpr void __set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl*  value) ;

constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* __get_m_Addressables() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> __get_m_Addressables() const;

constexpr void __set_m_LocatorInfos(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>* __get_m_LocatorInfos() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>*> __get_m_LocatorInfos() const;

constexpr void __set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& __get_m_DepOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& __get_m_DepOp() const;

constexpr void __set_m_CleanCacheOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>& __get_m_CleanCacheOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> const& __get_m_CleanCacheOp() const;

constexpr void __set_m_AutoCleanBundleCache(bool  value) ;

constexpr bool& __get_m_AutoCleanBundleCache() ;

constexpr bool const& __get_m_AutoCleanBundleCache() const;

static inline ::UnityEngine::AddressableAssets::UpdateCatalogsOperation* New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl*  aa) ;

/// @brief Method .ctor addr 0x2a218f4 size 0x5c virtual false final false
inline void _ctor(::UnityEngine::AddressableAssets::AddressablesImpl*  aa) ;

/// @brief Method Start addr 0x2a21950 size 0x6f4 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> Start(::System::Collections::Generic::IEnumerable_1<::StringW>*  catalogIds, bool  autoCleanBundleCache) ;

/// @brief Method InvokeWaitForCompletion addr 0x2a26650 size 0x1b0 virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method Destroy addr 0x2a26800 size 0x74 virtual true final false
inline void Destroy() ;

/// @brief Method GetDependencies addr 0x2a26874 size 0x128 virtual true final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  dependencies) ;

/// @brief Method Execute addr 0x2a2699c size 0x558 virtual true final false
inline void Execute() ;

/// @brief Method OnCleanCacheCompleted addr 0x2a26ef4 size 0xd8 virtual false final false
inline void OnCleanCacheCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  handle, ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*  catalogs) ;

// Ctor Parameters [CppParam { name: "", ty: "UpdateCatalogsOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateCatalogsOperation(UpdateCatalogsOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateCatalogsOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateCatalogsOperation(UpdateCatalogsOperation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UpdateCatalogsOperation()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::UpdateCatalogsOperation, 0xe0>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::UpdateCatalogsOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::UpdateCatalogsOperation*, "UnityEngine.AddressableAssets", "UpdateCatalogsOperation");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c*, "UnityEngine.AddressableAssets", "UpdateCatalogsOperation/<>c");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__UpdateCatalogsOperation____c__DisplayClass11_0*, "UnityEngine.AddressableAssets", "UpdateCatalogsOperation/<>c__DisplayClass11_0");
