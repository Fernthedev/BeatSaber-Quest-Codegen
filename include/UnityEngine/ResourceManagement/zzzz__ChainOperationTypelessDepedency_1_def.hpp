#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ChainOperationTypelessDepedency_1)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
template<typename TObject>
class ChainOperationTypelessDepedency_1;
}
namespace UnityEngine::ResourceManagement {
template<>
class ChainOperationTypelessDepedency_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace UnityEngine::ResourceManagement {
template<::il2cpp_utils::il2cpp_reference_type TObject>
class ChainOperationTypelessDepedency_1<TObject>;
}
namespace UnityEngine::ResourceManagement {
template<>
class ChainOperationTypelessDepedency_1<bool>;
}
namespace UnityEngine::ResourceManagement {
template<>
class ChainOperationTypelessDepedency_1<int64_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1);
// Type: UnityEngine.ResourceManagement::ChainOperationTypelessDepedency`1
// Type: UnityEngine.ResourceManagement::ChainOperationTypelessDepedency`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 788 }), TypeDefinitionIndex(TypeDefinitionIndex(14032)), TypeDefinitionIndex(TypeDefinitionIndex(13950))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13950), inst: 797 })
// CS Name: ::UnityEngine.ResourceManagement::ChainOperationTypelessDepedency`1<TObject>*
class CORDL_TYPE ChainOperationTypelessDepedency_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x110};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x110 - sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)]{};

/// @brief Field m_DepOp offset 0x90
 __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  m_DepOp;

/// @brief Field m_WrappedOp offset 0xa8
 __declspec(property(get=__get_m_WrappedOp, put=__set_m_WrappedOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  m_WrappedOp;

/// @brief Field m_depStatus offset 0xc8
 __declspec(property(get=__get_m_depStatus, put=__set_m_depStatus)) ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  m_depStatus;

/// @brief Field m_wrapStatus offset 0xe0
 __declspec(property(get=__get_m_wrapStatus, put=__set_m_wrapStatus)) ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  m_wrapStatus;

/// @brief Field m_Callback offset 0xf8
 __declspec(property(get=__get_m_Callback, put=__set_m_Callback)) ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  m_Callback;

/// @brief Field m_CachedOnWrappedCompleted offset 0x100
 __declspec(property(get=__get_m_CachedOnWrappedCompleted, put=__set_m_CachedOnWrappedCompleted)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  m_CachedOnWrappedCompleted;

/// @brief Field m_ReleaseDependenciesOnFailure offset 0x108
 __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure)) bool  m_ReleaseDependenciesOnFailure;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_Progress)) float_t  Progress;

constexpr void __set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __get_m_DepOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __get_m_DepOp() const;

constexpr void __set_m_WrappedOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>& __get_m_WrappedOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const& __get_m_WrappedOp() const;

constexpr void __set_m_depStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& __get_m_depStatus() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& __get_m_depStatus() const;

constexpr void __set_m_wrapStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& __get_m_wrapStatus() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& __get_m_wrapStatus() const;

constexpr void __set_m_Callback(::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  value) ;

constexpr ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* __get_m_Callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*> __get_m_Callback() const;

constexpr void __set_m_CachedOnWrappedCompleted(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* __get_m_CachedOnWrappedCompleted() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*> __get_m_CachedOnWrappedCompleted() const;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool  value) ;

constexpr bool& __get_m_ReleaseDependenciesOnFailure() ;

constexpr bool const& __get_m_ReleaseDependenciesOnFailure() const;

static inline ::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  callback, bool  releaseDependenciesOnFailure) ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

/// @brief Method OnWrappedCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnWrappedCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  x) ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Destroy() ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReleaseDependencies() ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method RefreshDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RefreshDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_Progress() ;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperationTypelessDepedency_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChainOperationTypelessDepedency_1(ChainOperationTypelessDepedency_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperationTypelessDepedency_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChainOperationTypelessDepedency_1(ChainOperationTypelessDepedency_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChainOperationTypelessDepedency_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: UnityEngine.ResourceManagement::ChainOperationTypelessDepedency`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14032)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 788 }), TypeDefinitionIndex(TypeDefinitionIndex(13950))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13950), inst: 333 })
// CS Name: ::UnityEngine.ResourceManagement::ChainOperationTypelessDepedency`1<TObject>*
class CORDL_TYPE ChainOperationTypelessDepedency_1<int64_t> : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x108};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x108 - sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>)]{};

/// @brief Field m_DepOp offset 0x88
 __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  m_DepOp;

/// @brief Field m_WrappedOp offset 0xa0
 __declspec(property(get=__get_m_WrappedOp, put=__set_m_WrappedOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>  m_WrappedOp;

/// @brief Field m_depStatus offset 0xc0
 __declspec(property(get=__get_m_depStatus, put=__set_m_depStatus)) ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  m_depStatus;

/// @brief Field m_wrapStatus offset 0xd8
 __declspec(property(get=__get_m_wrapStatus, put=__set_m_wrapStatus)) ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  m_wrapStatus;

/// @brief Field m_Callback offset 0xf0
 __declspec(property(get=__get_m_Callback, put=__set_m_Callback)) ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  m_Callback;

/// @brief Field m_CachedOnWrappedCompleted offset 0xf8
 __declspec(property(get=__get_m_CachedOnWrappedCompleted, put=__set_m_CachedOnWrappedCompleted)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  m_CachedOnWrappedCompleted;

/// @brief Field m_ReleaseDependenciesOnFailure offset 0x100
 __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure)) bool  m_ReleaseDependenciesOnFailure;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_Progress)) float_t  Progress;

constexpr void __set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __get_m_DepOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __get_m_DepOp() const;

constexpr void __set_m_WrappedOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>& __get_m_WrappedOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> const& __get_m_WrappedOp() const;

constexpr void __set_m_depStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& __get_m_depStatus() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& __get_m_depStatus() const;

constexpr void __set_m_wrapStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& __get_m_wrapStatus() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& __get_m_wrapStatus() const;

constexpr void __set_m_Callback(::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  value) ;

constexpr ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>* __get_m_Callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*> __get_m_Callback() const;

constexpr void __set_m_CachedOnWrappedCompleted(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>* __get_m_CachedOnWrappedCompleted() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*> __get_m_CachedOnWrappedCompleted() const;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool  value) ;

constexpr bool& __get_m_ReleaseDependenciesOnFailure() ;

constexpr bool const& __get_m_ReleaseDependenciesOnFailure() const;

static inline ::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  callback, bool  releaseDependenciesOnFailure) ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

/// @brief Method OnWrappedCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnWrappedCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>  x) ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Destroy() ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReleaseDependencies() ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method RefreshDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RefreshDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_Progress() ;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperationTypelessDepedency_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChainOperationTypelessDepedency_1(ChainOperationTypelessDepedency_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperationTypelessDepedency_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChainOperationTypelessDepedency_1(ChainOperationTypelessDepedency_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChainOperationTypelessDepedency_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: UnityEngine.ResourceManagement::ChainOperationTypelessDepedency`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13950)), TypeDefinitionIndex(TypeDefinitionIndex(14032)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 788 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13950), inst: 105 })
// CS Name: ::UnityEngine.ResourceManagement::ChainOperationTypelessDepedency`1<TObject>*
class CORDL_TYPE ChainOperationTypelessDepedency_1<bool> : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x108};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x108 - sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>)]{};

/// @brief Field m_DepOp offset 0x88
 __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  m_DepOp;

/// @brief Field m_WrappedOp offset 0xa0
 __declspec(property(get=__get_m_WrappedOp, put=__set_m_WrappedOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  m_WrappedOp;

/// @brief Field m_depStatus offset 0xc0
 __declspec(property(get=__get_m_depStatus, put=__set_m_depStatus)) ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  m_depStatus;

/// @brief Field m_wrapStatus offset 0xd8
 __declspec(property(get=__get_m_wrapStatus, put=__set_m_wrapStatus)) ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  m_wrapStatus;

/// @brief Field m_Callback offset 0xf0
 __declspec(property(get=__get_m_Callback, put=__set_m_Callback)) ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  m_Callback;

/// @brief Field m_CachedOnWrappedCompleted offset 0xf8
 __declspec(property(get=__get_m_CachedOnWrappedCompleted, put=__set_m_CachedOnWrappedCompleted)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  m_CachedOnWrappedCompleted;

/// @brief Field m_ReleaseDependenciesOnFailure offset 0x100
 __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure)) bool  m_ReleaseDependenciesOnFailure;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_Progress)) float_t  Progress;

constexpr void __set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __get_m_DepOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __get_m_DepOp() const;

constexpr void __set_m_WrappedOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>& __get_m_WrappedOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> const& __get_m_WrappedOp() const;

constexpr void __set_m_depStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& __get_m_depStatus() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& __get_m_depStatus() const;

constexpr void __set_m_wrapStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& __get_m_wrapStatus() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& __get_m_wrapStatus() const;

constexpr void __set_m_Callback(::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  value) ;

constexpr ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>* __get_m_Callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*> __get_m_Callback() const;

constexpr void __set_m_CachedOnWrappedCompleted(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>* __get_m_CachedOnWrappedCompleted() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*> __get_m_CachedOnWrappedCompleted() const;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool  value) ;

constexpr bool& __get_m_ReleaseDependenciesOnFailure() ;

constexpr bool const& __get_m_ReleaseDependenciesOnFailure() const;

static inline ::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  callback, bool  releaseDependenciesOnFailure) ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

/// @brief Method OnWrappedCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnWrappedCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  x) ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Destroy() ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReleaseDependencies() ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method RefreshDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RefreshDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_Progress() ;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperationTypelessDepedency_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChainOperationTypelessDepedency_1(ChainOperationTypelessDepedency_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperationTypelessDepedency_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChainOperationTypelessDepedency_1(ChainOperationTypelessDepedency_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChainOperationTypelessDepedency_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: UnityEngine.ResourceManagement::ChainOperationTypelessDepedency`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13950)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 788 }), TypeDefinitionIndex(TypeDefinitionIndex(14032))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13950), inst: 2 })
// CS Name: ::UnityEngine.ResourceManagement::ChainOperationTypelessDepedency`1<TObject>*
class CORDL_TYPE ChainOperationTypelessDepedency_1<TObject> : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x108};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x108 - sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>)]{};

/// @brief Field m_DepOp offset 0x88
 __declspec(property(get=__get_m_DepOp, put=__set_m_DepOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  m_DepOp;

/// @brief Field m_WrappedOp offset 0xa0
 __declspec(property(get=__get_m_WrappedOp, put=__set_m_WrappedOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  m_WrappedOp;

/// @brief Field m_depStatus offset 0xc0
 __declspec(property(get=__get_m_depStatus, put=__set_m_depStatus)) ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  m_depStatus;

/// @brief Field m_wrapStatus offset 0xd8
 __declspec(property(get=__get_m_wrapStatus, put=__set_m_wrapStatus)) ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  m_wrapStatus;

/// @brief Field m_Callback offset 0xf0
 __declspec(property(get=__get_m_Callback, put=__set_m_Callback)) ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  m_Callback;

/// @brief Field m_CachedOnWrappedCompleted offset 0xf8
 __declspec(property(get=__get_m_CachedOnWrappedCompleted, put=__set_m_CachedOnWrappedCompleted)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  m_CachedOnWrappedCompleted;

/// @brief Field m_ReleaseDependenciesOnFailure offset 0x100
 __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure)) bool  m_ReleaseDependenciesOnFailure;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_Progress)) float_t  Progress;

constexpr void __set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __get_m_DepOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __get_m_DepOp() const;

constexpr void __set_m_WrappedOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& __get_m_WrappedOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const& __get_m_WrappedOp() const;

constexpr void __set_m_depStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& __get_m_depStatus() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& __get_m_depStatus() const;

constexpr void __set_m_wrapStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& __get_m_wrapStatus() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& __get_m_wrapStatus() const;

constexpr void __set_m_Callback(::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value) ;

constexpr ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* __get_m_Callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*> __get_m_Callback() const;

constexpr void __set_m_CachedOnWrappedCompleted(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* __get_m_CachedOnWrappedCompleted() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*> __get_m_CachedOnWrappedCompleted() const;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool  value) ;

constexpr bool& __get_m_ReleaseDependenciesOnFailure() ;

constexpr bool const& __get_m_ReleaseDependenciesOnFailure() const;

static inline ::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback, bool  releaseDependenciesOnFailure) ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

/// @brief Method OnWrappedCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnWrappedCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  x) ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Destroy() ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReleaseDependencies() ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method RefreshDownloadStatus addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RefreshDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_Progress() ;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperationTypelessDepedency_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChainOperationTypelessDepedency_1(ChainOperationTypelessDepedency_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChainOperationTypelessDepedency_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChainOperationTypelessDepedency_1(ChainOperationTypelessDepedency_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChainOperationTypelessDepedency_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1, "UnityEngine.ResourceManagement", "ChainOperationTypelessDepedency`1");
