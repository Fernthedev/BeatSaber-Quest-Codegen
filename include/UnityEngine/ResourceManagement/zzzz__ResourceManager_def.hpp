#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceManager)
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
template<typename T>
class DelegateList_1;
}
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement {
template<typename TObject>
class __ResourceManager__CompletedOperation_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
namespace UnityEngine::Networking {
class CertificateHandler;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DiagnosticEventContext;
}
namespace UnityEngine::ResourceManagement {
template<typename TObject>
class __ResourceManager____c__DisplayClass92_0_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DeferredCallbackRegisterRequest;
}
namespace GlobalNamespace {
template<typename T>
class ListWithEvents_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class GroupOperation;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DiagnosticEventType;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
class AsyncOperationBase_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement {
class __ResourceManager__InstanceOperation;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
template<typename TObject>
class __ResourceManager__CompletedOperation_1;
}
namespace UnityEngine::ResourceManagement {
template<typename TObject>
class __ResourceManager____c__DisplayClass92_0_1;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DiagnosticEventType;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement {
template<>
class __ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace UnityEngine::ResourceManagement {
template<::il2cpp_utils::il2cpp_reference_type TObject>
class __ResourceManager__CompletedOperation_1<TObject>;
}
namespace UnityEngine::ResourceManagement {
template<>
class __ResourceManager__CompletedOperation_1<bool>;
}
namespace UnityEngine::ResourceManagement {
template<>
class __ResourceManager__CompletedOperation_1<int64_t>;
}
namespace UnityEngine::ResourceManagement {
class __ResourceManager__InstanceOperation;
}
namespace UnityEngine::ResourceManagement {
template<::il2cpp_utils::il2cpp_reference_type TObject>
class __ResourceManager____c__DisplayClass92_0_1<TObject>;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DeferredCallbackRegisterRequest;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DiagnosticEventContext;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1);
MARK_VAL_T(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceManager);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation);
MARK_VAL_T(::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest);
MARK_VAL_T(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext);
// Type: ::DiagnosticEventType
namespace UnityEngine::ResourceManagement {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13951))
// CS Name: ::ResourceManager::DiagnosticEventType
struct CORDL_TYPE __ResourceManager__DiagnosticEventType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ResourceManager__DiagnosticEventType_Unwrapped
enum struct ____ResourceManager__DiagnosticEventType_Unwrapped : int32_t {
__E_AsyncOperationFail = static_cast<int32_t>(0x0),
__E_AsyncOperationCreate = static_cast<int32_t>(0x1),
__E_AsyncOperationPercentComplete = static_cast<int32_t>(0x2),
__E_AsyncOperationComplete = static_cast<int32_t>(0x3),
__E_AsyncOperationReferenceCount = static_cast<int32_t>(0x4),
__E_AsyncOperationDestroy = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field AsyncOperationFail value: static_cast<int32_t>(0x0)
static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationFail;

/// @brief Field AsyncOperationCreate value: static_cast<int32_t>(0x1)
static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationCreate;

/// @brief Field AsyncOperationPercentComplete value: static_cast<int32_t>(0x2)
static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationPercentComplete;

/// @brief Field AsyncOperationComplete value: static_cast<int32_t>(0x3)
static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationComplete;

/// @brief Field AsyncOperationReferenceCount value: static_cast<int32_t>(0x4)
static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationReferenceCount;

/// @brief Field AsyncOperationDestroy value: static_cast<int32_t>(0x5)
static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationDestroy;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ResourceManager__DiagnosticEventType_Unwrapped () const noexcept {
return std::bit_cast<____ResourceManager__DiagnosticEventType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ResourceManager__DiagnosticEventType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ResourceManager__DiagnosticEventType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ResourceManager__DiagnosticEventType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement
// Type: ::DiagnosticEventContext
namespace UnityEngine::ResourceManagement {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13952))
// CS Name: ::ResourceManager::DiagnosticEventContext
struct CORDL_TYPE __ResourceManager__DiagnosticEventContext : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <OperationHandle>k__BackingField offset 0x0
 __declspec(property(get=__get__OperationHandle_k__BackingField, put=__set__OperationHandle_k__BackingField)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _OperationHandle_k__BackingField;

/// @brief Field <Type>k__BackingField offset 0x18
 __declspec(property(get=__get__Type_k__BackingField, put=__set__Type_k__BackingField)) ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  _Type_k__BackingField;

/// @brief Field <EventValue>k__BackingField offset 0x1c
 __declspec(property(get=__get__EventValue_k__BackingField, put=__set__EventValue_k__BackingField)) int32_t  _EventValue_k__BackingField;

/// @brief Field <Location>k__BackingField offset 0x20
 __declspec(property(get=__get__Location_k__BackingField, put=__set__Location_k__BackingField)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  _Location_k__BackingField;

/// @brief Field <Context>k__BackingField offset 0x28
 __declspec(property(get=__get__Context_k__BackingField, put=__set__Context_k__BackingField)) ::System::Object*  _Context_k__BackingField;

/// @brief Field <Error>k__BackingField offset 0x30
 __declspec(property(get=__get__Error_k__BackingField, put=__set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

 __declspec(property(get=get_OperationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  OperationHandle;

 __declspec(property(get=get_Type)) ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  Type;

 __declspec(property(get=get_EventValue)) int32_t  EventValue;

 __declspec(property(get=get_Location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  Location;

 __declspec(property(get=get_Context)) ::System::Object*  Context;

 __declspec(property(get=get_Error)) ::StringW  Error;

constexpr void __set__OperationHandle_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __get__OperationHandle_k__BackingField() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __get__OperationHandle_k__BackingField() const;

constexpr void __set__Type_k__BackingField(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  value) ;

constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType& __get__Type_k__BackingField() ;

constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const& __get__Type_k__BackingField() const;

constexpr void __set__EventValue_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__EventValue_k__BackingField() ;

constexpr int32_t const& __get__EventValue_k__BackingField() const;

constexpr void __set__Location_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* __get__Location_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> __get__Location_k__BackingField() const;

constexpr void __set__Context_k__BackingField(::System::Object*  value) ;

constexpr ::System::Object* __get__Context_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__Context_k__BackingField() const;

constexpr void __set__Error_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Error_k__BackingField() ;

constexpr ::StringW const& __get__Error_k__BackingField() const;

/// @brief Method get_OperationHandle addr 0x2bce620 size 0x14 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle() ;

/// @brief Method get_Type addr 0x2bce634 size 0x8 virtual false final false
inline ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType get_Type() ;

/// @brief Method get_EventValue addr 0x2bce63c size 0x8 virtual false final false
inline int32_t get_EventValue() ;

/// @brief Method get_Location addr 0x2bce644 size 0x8 virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location() ;

/// @brief Method get_Context addr 0x2bce64c size 0x8 virtual false final false
inline ::System::Object* get_Context() ;

/// @brief Method get_Error addr 0x2bce654 size 0x8 virtual false final false
inline ::StringW get_Error() ;

/// @brief Method .ctor addr 0x2bce65c size 0x104 virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  type, int32_t  eventValue, ::StringW  error, ::System::Object*  context) ;

// Ctor Parameters [CppParam { name: "_OperationHandle_k__BackingField", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: None }, CppParam { name: "_Type_k__BackingField", ty: "::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType", modifiers: "", def_value: None }, CppParam { name: "_EventValue_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Location_k__BackingField", ty: "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*", modifiers: "", def_value: None }, CppParam { name: "_Context_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_Error_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __ResourceManager__DiagnosticEventContext(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _OperationHandle_k__BackingField, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  _Type_k__BackingField, int32_t  _EventValue_k__BackingField, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  _Location_k__BackingField, ::System::Object*  _Context_k__BackingField, ::StringW  _Error_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ResourceManager__DiagnosticEventContext(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ResourceManager__DiagnosticEventContext()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement
// Type: ::DeferredCallbackRegisterRequest
namespace UnityEngine::ResourceManagement {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13953))
// CS Name: ::ResourceManager::DeferredCallbackRegisterRequest
struct CORDL_TYPE __ResourceManager__DeferredCallbackRegisterRequest : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field operation offset 0x0
 __declspec(property(get=__get_operation, put=__set_operation)) ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation;

/// @brief Field incrementRefCount offset 0x8
 __declspec(property(get=__get_incrementRefCount, put=__set_incrementRefCount)) bool  incrementRefCount;

constexpr void __set_operation(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* __get_operation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*> __get_operation() const;

constexpr void __set_incrementRefCount(bool  value) ;

constexpr bool& __get_incrementRefCount() ;

constexpr bool const& __get_incrementRefCount() const;

// Ctor Parameters [CppParam { name: "operation", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "incrementRefCount", ty: "bool", modifiers: "", def_value: None }]
constexpr __ResourceManager__DeferredCallbackRegisterRequest(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation, bool  incrementRefCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ResourceManager__DeferredCallbackRegisterRequest(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ResourceManager__DeferredCallbackRegisterRequest()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement
// Type: ::CompletedOperation`1
// Type: ::InstanceOperation
namespace UnityEngine::ResourceManagement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10196)), TypeDefinitionIndex(TypeDefinitionIndex(14032)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 311 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13955))
// CS Name: ::ResourceManager::InstanceOperation*
class CORDL_TYPE __ResourceManager__InstanceOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::GameObject*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::GameObject*>)]{};

/// @brief Field m_dependency offset 0x88
 __declspec(property(get=__get_m_dependency, put=__set_m_dependency)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>  m_dependency;

/// @brief Field m_instantiationParams offset 0xa8
 __declspec(property(get=__get_m_instantiationParams, put=__set_m_instantiationParams)) ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  m_instantiationParams;

/// @brief Field m_instanceProvider offset 0xd8
 __declspec(property(get=__get_m_instanceProvider, put=__set_m_instanceProvider)) ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*  m_instanceProvider;

/// @brief Field m_instance offset 0xe0
 __declspec(property(get=__get_m_instance, put=__set_m_instance)) ::UnityEngine::GameObject*  m_instance;

/// @brief Field m_scene offset 0xe8
 __declspec(property(get=__get_m_scene, put=__set_m_scene)) ::UnityEngine::SceneManagement::Scene  m_scene;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_Progress)) float_t  Progress;

constexpr void __set_m_dependency(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>& __get_m_dependency() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> const& __get_m_dependency() const;

constexpr void __set_m_instantiationParams(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters& __get_m_instantiationParams() ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const& __get_m_instantiationParams() const;

constexpr void __set_m_instanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* __get_m_instanceProvider() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*> __get_m_instanceProvider() const;

constexpr void __set_m_instance(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_m_instance() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_m_instance() const;

constexpr void __set_m_scene(::UnityEngine::SceneManagement::Scene  value) ;

constexpr ::UnityEngine::SceneManagement::Scene& __get_m_scene() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __get_m_scene() const;

/// @brief Method Init addr 0x2bcd854 size 0x30 virtual false final false
inline void Init(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*  instanceProvider, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  instantiationParams, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>  dependency) ;

/// @brief Method GetDownloadStatus addr 0x2bce760 size 0xdc virtual true final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method GetDependencies addr 0x2bce83c size 0x128 virtual true final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method get_DebugName addr 0x2bce964 size 0x110 virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method InstanceScene addr 0x2bcea74 size 0x8 virtual false final false
inline ::UnityEngine::SceneManagement::Scene InstanceScene() ;

/// @brief Method Destroy addr 0x2bcea7c size 0xb4 virtual true final false
inline void Destroy() ;

/// @brief Method get_Progress addr 0x2bceb30 size 0x48 virtual true final false
inline float_t get_Progress() ;

/// @brief Method InvokeWaitForCompletion addr 0x2bceb78 size 0x130 virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x2bceca8 size 0x240 virtual true final false
inline void Execute() ;

static inline ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation* New_ctor() ;

/// @brief Method .ctor addr 0x2bceee8 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__InstanceOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ResourceManager__InstanceOperation(__ResourceManager__InstanceOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__InstanceOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ResourceManager__InstanceOperation(__ResourceManager__InstanceOperation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ResourceManager__InstanceOperation()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation, 0xf0>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement
// Type: ::<>c__DisplayClass92_0`1
// Type: UnityEngine.ResourceManagement::ResourceManager
namespace UnityEngine::ResourceManagement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13957))
// CS Name: ::UnityEngine.ResourceManagement::ResourceManager*
class CORDL_TYPE ResourceManager : public ::System::Object {
public:
// Declarations
template<typename TObject>
using __c__DisplayClass92_0_1 = ::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>;

using InstanceOperation = ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation;

template<typename TObject>
using CompletedOperation_1 = ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>;

using DeferredCallbackRegisterRequest = ::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest;

using DiagnosticEventContext = ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext;

using DiagnosticEventType = ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd0 - sizeof(::System::Object)]{};

/// @brief Field postProfilerEvents offset 0x10
 __declspec(property(get=__get_postProfilerEvents, put=__set_postProfilerEvents)) bool  postProfilerEvents;

/// @brief Field <InternalIdTransformFunc>k__BackingField offset 0x18
 __declspec(property(get=__get__InternalIdTransformFunc_k__BackingField, put=__set__InternalIdTransformFunc_k__BackingField)) ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  _InternalIdTransformFunc_k__BackingField;

/// @brief Field <WebRequestOverride>k__BackingField offset 0x20
 __declspec(property(get=__get__WebRequestOverride_k__BackingField, put=__set__WebRequestOverride_k__BackingField)) ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  _WebRequestOverride_k__BackingField;

/// @brief Field CallbackHooksEnabled offset 0x28
 __declspec(property(get=__get_CallbackHooksEnabled, put=__set_CallbackHooksEnabled)) bool  CallbackHooksEnabled;

/// @brief Field m_ResourceProviders offset 0x30
 __declspec(property(get=__get_m_ResourceProviders, put=__set_m_ResourceProviders)) ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*  m_ResourceProviders;

/// @brief Field m_allocator offset 0x38
 __declspec(property(get=__get_m_allocator, put=__set_m_allocator)) ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  m_allocator;

/// @brief Field m_UpdateReceivers offset 0x40
 __declspec(property(get=__get_m_UpdateReceivers, put=__set_m_UpdateReceivers)) ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*  m_UpdateReceivers;

/// @brief Field m_UpdateReceiversToRemove offset 0x48
 __declspec(property(get=__get_m_UpdateReceiversToRemove, put=__set_m_UpdateReceiversToRemove)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*  m_UpdateReceiversToRemove;

/// @brief Field m_UpdatingReceivers offset 0x50
 __declspec(property(get=__get_m_UpdatingReceivers, put=__set_m_UpdatingReceivers)) bool  m_UpdatingReceivers;

/// @brief Field m_InsideUpdateMethod offset 0x51
 __declspec(property(get=__get_m_InsideUpdateMethod, put=__set_m_InsideUpdateMethod)) bool  m_InsideUpdateMethod;

/// @brief Field m_providerMap offset 0x58
 __declspec(property(get=__get_m_providerMap, put=__set_m_providerMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*  m_providerMap;

/// @brief Field m_AssetOperationCache offset 0x60
 __declspec(property(get=__get_m_AssetOperationCache, put=__set_m_AssetOperationCache)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  m_AssetOperationCache;

/// @brief Field m_TrackedInstanceOperations offset 0x68
 __declspec(property(get=__get_m_TrackedInstanceOperations, put=__set_m_TrackedInstanceOperations)) ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*  m_TrackedInstanceOperations;

/// @brief Field m_UpdateCallbacks offset 0x70
 __declspec(property(get=__get_m_UpdateCallbacks, put=__set_m_UpdateCallbacks)) ::GlobalNamespace::DelegateList_1<float_t>*  m_UpdateCallbacks;

/// @brief Field m_DeferredCompleteCallbacks offset 0x78
 __declspec(property(get=__get_m_DeferredCompleteCallbacks, put=__set_m_DeferredCompleteCallbacks)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  m_DeferredCompleteCallbacks;

/// @brief Field m_InsideExecuteDeferredCallbacksMethod offset 0x80
 __declspec(property(get=__get_m_InsideExecuteDeferredCallbacksMethod, put=__set_m_InsideExecuteDeferredCallbacksMethod)) bool  m_InsideExecuteDeferredCallbacksMethod;

/// @brief Field m_DeferredCallbacksToRegister offset 0x88
 __declspec(property(get=__get_m_DeferredCallbacksToRegister, put=__set_m_DeferredCallbacksToRegister)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*  m_DeferredCallbacksToRegister;

/// @brief Field m_obsoleteDiagnosticsHandler offset 0x90
 __declspec(property(get=__get_m_obsoleteDiagnosticsHandler, put=__set_m_obsoleteDiagnosticsHandler)) ::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*  m_obsoleteDiagnosticsHandler;

/// @brief Field m_diagnosticsHandler offset 0x98
 __declspec(property(get=__get_m_diagnosticsHandler, put=__set_m_diagnosticsHandler)) ::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*  m_diagnosticsHandler;

/// @brief Field m_ReleaseOpNonCached offset 0xa0
 __declspec(property(get=__get_m_ReleaseOpNonCached, put=__set_m_ReleaseOpNonCached)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  m_ReleaseOpNonCached;

/// @brief Field m_ReleaseOpCached offset 0xa8
 __declspec(property(get=__get_m_ReleaseOpCached, put=__set_m_ReleaseOpCached)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  m_ReleaseOpCached;

/// @brief Field m_ReleaseInstanceOp offset 0xb0
 __declspec(property(get=__get_m_ReleaseInstanceOp, put=__set_m_ReleaseInstanceOp)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  m_ReleaseInstanceOp;

/// @brief Field <CertificateHandlerInstance>k__BackingField offset 0xb8
 __declspec(property(get=__get__CertificateHandlerInstance_k__BackingField, put=__set__CertificateHandlerInstance_k__BackingField)) ::UnityEngine::Networking::CertificateHandler*  _CertificateHandlerInstance_k__BackingField;

/// @brief Field m_RegisteredForCallbacks offset 0xc0
 __declspec(property(get=__get_m_RegisteredForCallbacks, put=__set_m_RegisteredForCallbacks)) bool  m_RegisteredForCallbacks;

/// @brief Field m_ProviderOperationTypeCache offset 0xc8
 __declspec(property(get=__get_m_ProviderOperationTypeCache, put=__set_m_ProviderOperationTypeCache)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*  m_ProviderOperationTypeCache;

 __declspec(property(get=get_InternalIdTransformFunc, put=set_InternalIdTransformFunc)) ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  InternalIdTransformFunc;

 __declspec(property(get=get_WebRequestOverride, put=set_WebRequestOverride)) ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  WebRequestOverride;

 __declspec(property(get=get_OperationCacheCount)) int32_t  OperationCacheCount;

 __declspec(property(get=get_InstanceOperationCount)) int32_t  InstanceOperationCount;

 __declspec(property(get=get_Allocator, put=set_Allocator)) ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  Allocator;

 __declspec(property(get=get_ResourceProviders)) ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*  ResourceProviders;

 __declspec(property(get=get_CertificateHandlerInstance, put=set_CertificateHandlerInstance)) ::UnityEngine::Networking::CertificateHandler*  CertificateHandlerInstance;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_postProfilerEvents(bool  value) ;

constexpr bool& __get_postProfilerEvents() ;

constexpr bool const& __get_postProfilerEvents() const;

static inline void setStaticF__ExceptionHandler_k__BackingField(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*  value) ;

static inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>* getStaticF__ExceptionHandler_k__BackingField() ;

constexpr void __set__InternalIdTransformFunc_k__BackingField(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  value) ;

constexpr ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>* __get__InternalIdTransformFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*> __get__InternalIdTransformFunc_k__BackingField() const;

constexpr void __set__WebRequestOverride_k__BackingField(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* __get__WebRequestOverride_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*> __get__WebRequestOverride_k__BackingField() const;

constexpr void __set_CallbackHooksEnabled(bool  value) ;

constexpr bool& __get_CallbackHooksEnabled() ;

constexpr bool const& __get_CallbackHooksEnabled() const;

constexpr void __set_m_ResourceProviders(::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*  value) ;

constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* __get_m_ResourceProviders() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*> __get_m_ResourceProviders() const;

constexpr void __set_m_allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  value) ;

constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* __get_m_allocator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*> __get_m_allocator() const;

constexpr void __set_m_UpdateReceivers(::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*  value) ;

constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* __get_m_UpdateReceivers() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*> __get_m_UpdateReceivers() const;

constexpr void __set_m_UpdateReceiversToRemove(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* __get_m_UpdateReceiversToRemove() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*> __get_m_UpdateReceiversToRemove() const;

constexpr void __set_m_UpdatingReceivers(bool  value) ;

constexpr bool& __get_m_UpdatingReceivers() ;

constexpr bool const& __get_m_UpdatingReceivers() const;

constexpr void __set_m_InsideUpdateMethod(bool  value) ;

constexpr bool& __get_m_InsideUpdateMethod() ;

constexpr bool const& __get_m_InsideUpdateMethod() const;

constexpr void __set_m_providerMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* __get_m_providerMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*> __get_m_providerMap() const;

constexpr void __set_m_AssetOperationCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* __get_m_AssetOperationCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> __get_m_AssetOperationCache() const;

constexpr void __set_m_TrackedInstanceOperations(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>* __get_m_TrackedInstanceOperations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*> __get_m_TrackedInstanceOperations() const;

constexpr void __set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<float_t>* __get_m_UpdateCallbacks() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<float_t>*> __get_m_UpdateCallbacks() const;

constexpr void __set_m_DeferredCompleteCallbacks(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* __get_m_DeferredCompleteCallbacks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> __get_m_DeferredCompleteCallbacks() const;

constexpr void __set_m_InsideExecuteDeferredCallbacksMethod(bool  value) ;

constexpr bool& __get_m_InsideExecuteDeferredCallbacksMethod() ;

constexpr bool const& __get_m_InsideExecuteDeferredCallbacksMethod() const;

constexpr void __set_m_DeferredCallbacksToRegister(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>* __get_m_DeferredCallbacksToRegister() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*> __get_m_DeferredCallbacksToRegister() const;

constexpr void __set_m_obsoleteDiagnosticsHandler(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*  value) ;

constexpr ::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>* __get_m_obsoleteDiagnosticsHandler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*> __get_m_obsoleteDiagnosticsHandler() const;

constexpr void __set_m_diagnosticsHandler(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>* __get_m_diagnosticsHandler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*> __get_m_diagnosticsHandler() const;

constexpr void __set_m_ReleaseOpNonCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* __get_m_ReleaseOpNonCached() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> __get_m_ReleaseOpNonCached() const;

constexpr void __set_m_ReleaseOpCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* __get_m_ReleaseOpCached() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> __get_m_ReleaseOpCached() const;

constexpr void __set_m_ReleaseInstanceOp(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* __get_m_ReleaseInstanceOp() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> __get_m_ReleaseInstanceOp() const;

static inline void setStaticF_s_GroupOperationTypeHash(int32_t  value) ;

static inline int32_t getStaticF_s_GroupOperationTypeHash() ;

static inline void setStaticF_s_InstanceOperationTypeHash(int32_t  value) ;

static inline int32_t getStaticF_s_InstanceOperationTypeHash() ;

constexpr void __set__CertificateHandlerInstance_k__BackingField(::UnityEngine::Networking::CertificateHandler*  value) ;

constexpr ::UnityEngine::Networking::CertificateHandler* __get__CertificateHandlerInstance_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::CertificateHandler*> __get__CertificateHandlerInstance_k__BackingField() const;

constexpr void __set_m_RegisteredForCallbacks(bool  value) ;

constexpr bool& __get_m_RegisteredForCallbacks() ;

constexpr bool const& __get_m_RegisteredForCallbacks() const;

constexpr void __set_m_ProviderOperationTypeCache(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>* __get_m_ProviderOperationTypeCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*> __get_m_ProviderOperationTypeCache() const;

/// @brief Method get_ExceptionHandler addr 0x2bc9b54 size 0x58 virtual false final false
static inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>* get_ExceptionHandler() ;

/// @brief Method set_ExceptionHandler addr 0x2bc9bac size 0x5c virtual false final false
static inline void set_ExceptionHandler(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*  value) ;

/// @brief Method get_InternalIdTransformFunc addr 0x2bc9c08 size 0x8 virtual false final false
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>* get_InternalIdTransformFunc() ;

/// @brief Method set_InternalIdTransformFunc addr 0x2bc9c10 size 0x8 virtual false final false
inline void set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  value) ;

/// @brief Method TransformInternalId addr 0x2bc9c18 size 0xc4 virtual false final false
inline ::StringW TransformInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location) ;

/// @brief Method get_WebRequestOverride addr 0x2bc9cdc size 0x8 virtual false final false
inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* get_WebRequestOverride() ;

/// @brief Method set_WebRequestOverride addr 0x2bc9ce4 size 0x8 virtual false final false
inline void set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  value) ;

/// @brief Method get_OperationCacheCount addr 0x2bc9cec size 0x50 virtual false final false
inline int32_t get_OperationCacheCount() ;

/// @brief Method get_InstanceOperationCount addr 0x2bc9d3c size 0x48 virtual false final false
inline int32_t get_InstanceOperationCount() ;

/// @brief Method AddUpdateReceiver addr 0x2bc9d84 size 0x68 virtual false final false
inline void AddUpdateReceiver(::UnityEngine::ResourceManagement::IUpdateReceiver*  receiver) ;

/// @brief Method RemoveUpdateReciever addr 0x2bc9dec size 0x12c virtual false final false
inline void RemoveUpdateReciever(::UnityEngine::ResourceManagement::IUpdateReceiver*  receiver) ;

/// @brief Method get_Allocator addr 0x2bc9f18 size 0x8 virtual false final false
inline ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* get_Allocator() ;

/// @brief Method set_Allocator addr 0x2bc9f20 size 0x8 virtual false final false
inline void set_Allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  value) ;

/// @brief Method get_ResourceProviders addr 0x2bc9f28 size 0x8 virtual false final false
inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* get_ResourceProviders() ;

/// @brief Method get_CertificateHandlerInstance addr 0x2bc9f30 size 0x8 virtual false final false
inline ::UnityEngine::Networking::CertificateHandler* get_CertificateHandlerInstance() ;

/// @brief Method set_CertificateHandlerInstance addr 0x2bc9f38 size 0x8 virtual false final false
inline void set_CertificateHandlerInstance(::UnityEngine::Networking::CertificateHandler*  value) ;

static inline ::UnityEngine::ResourceManagement::ResourceManager* New_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  alloc) ;

/// @brief Method .ctor addr 0x2bc9f40 size 0x48c virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  alloc) ;

/// @brief Method OnObjectAdded addr 0x2bca5a4 size 0x74 virtual false final false
inline void OnObjectAdded(::System::Object*  obj) ;

/// @brief Method OnObjectRemoved addr 0x2bca618 size 0x74 virtual false final false
inline void OnObjectRemoved(::System::Object*  obj) ;

/// @brief Method RegisterForCallbacks addr 0x2bca68c size 0xcc virtual false final false
inline void RegisterForCallbacks() ;

/// @brief Method ClearDiagnosticsCallback addr 0x2bca758 size 0x8 virtual false final false
inline void ClearDiagnosticsCallback() ;

/// @brief Method ClearDiagnosticCallbacks addr 0x2bca760 size 0x8 virtual false final false
inline void ClearDiagnosticCallbacks() ;

/// @brief Method UnregisterDiagnosticCallback addr 0x2bca768 size 0xfc virtual false final false
inline void UnregisterDiagnosticCallback(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*  func) ;

/// @brief Method RegisterDiagnosticCallback addr 0x2bca864 size 0x8 virtual false final false
inline void RegisterDiagnosticCallback(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*  func) ;

/// @brief Method RegisterDiagnosticCallback addr 0x2bca86c size 0xa8 virtual false final false
inline void RegisterDiagnosticCallback(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*  func) ;

/// @brief Method PostDiagnosticEvent addr 0x2bca914 size 0x118 virtual false final false
inline void PostDiagnosticEvent(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext  context) ;

/// @brief Method GetResourceProvider addr 0x2bcaa2c size 0x448 virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* GetResourceProvider(::System::Type*  t, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location) ;

/// @brief Method GetDefaultTypeForLocation addr 0x2bcae74 size 0x148 virtual false final false
inline ::System::Type* GetDefaultTypeForLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  loc) ;

/// @brief Method CalculateLocationsHash addr 0x2bcafbc size 0x450 virtual false final false
inline int32_t CalculateLocationsHash(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Type*  t) ;

/// @brief Method ProvideResource addr 0x2bcb40c size 0x7d0 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::System::Type*  desiredType, bool  releaseDependenciesOnFailure) ;

/// @brief Method ProvideResource addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location) ;

/// @brief Method StartOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*  operation, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency) ;

/// @brief Method StartOperation addr 0x2bcc544 size 0x174 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency) ;

/// @brief Method OnInstanceOperationDestroy addr 0x2bcc6b8 size 0x144 virtual false final false
inline void OnInstanceOperationDestroy(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  o) ;

/// @brief Method OnOperationDestroyNonCached addr 0x2bcc7fc size 0xd4 virtual false final false
inline void OnOperationDestroyNonCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  o) ;

/// @brief Method OnOperationDestroyCached addr 0x2bcc8d0 size 0x1d4 virtual false final false
inline void OnOperationDestroyCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  o) ;

/// @brief Method CreateOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline T CreateOperation(::System::Type*  actualType, int32_t  typeHash, ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  cacheKey, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  onDestroyAction) ;

/// @brief Method AddOperationToCache addr 0x2bccb1c size 0x88 virtual false final false
inline void AddOperationToCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation) ;

/// @brief Method RemoveOperationFromCache addr 0x2bccaa4 size 0x78 virtual false final false
inline bool RemoveOperationFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key) ;

/// @brief Method IsOperationCached addr 0x2bccba4 size 0x58 virtual false final false
inline bool IsOperationCached(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key) ;

/// @brief Method CachedOperationCount addr 0x2bccbfc size 0x50 virtual false final false
inline int32_t CachedOperationCount() ;

/// @brief Method CreateCompletedOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperation(TObject  result, ::StringW  errorMsg) ;

/// @brief Method CreateCompletedOperationWithException addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperationWithException(TObject  result, ::System::Exception*  exception) ;

/// @brief Method CreateCompletedOperationInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperationInternal(TObject  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure) ;

/// @brief Method Release addr 0x2bccc4c size 0x8 virtual false final false
inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method Acquire addr 0x2bccd08 size 0x20 virtual false final false
inline void Acquire(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method AcquireGroupOpFromCache addr 0x2bccdec size 0x13c virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* AcquireGroupOpFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key) ;

/// @brief Method CreateGroupOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations) ;

/// @brief Method CreateGroupOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, bool  allowFailedDependencies) ;

/// @brief Method CreateGenericGroupOperation addr 0x2bccf28 size 0x19c virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> CreateGenericGroupOperation(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  operations, bool  releasedCachedOpOnComplete) ;

/// @brief Method ProvideResourceGroupCached addr 0x2bcbdc8 size 0x77c virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> ProvideResourceGroupCached(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, int32_t  groupHash, ::System::Type*  desiredType, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  callback, bool  releaseDependenciesOnFailure) ;

/// @brief Method ProvideResources addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Action_1<TObject>*  callback) ;

/// @brief Method ProvideResources addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, bool  releaseDependenciesOnFailure, ::System::Action_1<TObject>*  callback) ;

/// @brief Method CreateChainOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TObjectDependency>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback) ;

/// @brief Method CreateChainOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback) ;

/// @brief Method CreateChainOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TObjectDependency>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback, bool  releaseDependenciesOnFailure) ;

/// @brief Method CreateChainOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback, bool  releaseDependenciesOnFailure) ;

/// @brief Method ProvideScene addr 0x2bcd330 size 0x140 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ProvideScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*  sceneProvider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, bool  activateOnLoad, int32_t  priority) ;

/// @brief Method ReleaseScene addr 0x2bcd470 size 0x130 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ReleaseScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*  sceneProvider, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  sceneLoadHandle) ;

/// @brief Method ProvideInstance addr 0x2bcd5a0 size 0x2b4 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> ProvideInstance(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*  provider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  instantiateParameters) ;

/// @brief Method CleanupSceneInstances addr 0x2bcd884 size 0x408 virtual false final false
inline void CleanupSceneInstances(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method ExecuteDeferredCallbacks addr 0x2bcdc8c size 0x1b4 virtual false final false
inline void ExecuteDeferredCallbacks() ;

/// @brief Method RegisterForDeferredCallback addr 0x2bcde40 size 0x210 virtual false final false
inline void RegisterForDeferredCallback(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, bool  incrementRefCount) ;

/// @brief Method Update addr 0x2bce050 size 0x414 virtual false final false
inline void Update(float_t  unscaledDeltaTime) ;

/// @brief Method Dispose addr 0x2bce464 size 0xd8 virtual true final true
inline void Dispose() ;

/// @brief Method <.ctor>b__53_0 addr 0x2bce61c size 0x4 virtual false final false
inline void __ctor_b__53_0(::UnityEngine::ResourceManagement::IUpdateReceiver*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResourceManager(ResourceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResourceManager(ResourceManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ResourceManager()  = default;
public:


// Fields

// Static field <ExceptionHandler>k__BackingField

// Static field s_GroupOperationTypeHash

// Static field s_InstanceOperationTypeHash


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceManager, 0xd0>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement
// Type: ::CompletedOperation`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13954)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 791 }), TypeDefinitionIndex(TypeDefinitionIndex(14032))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13954), inst: 797 })
// CS Name: ::ResourceManager::CompletedOperation`1<TObject>*
class CORDL_TYPE __ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)]{};

/// @brief Field m_Success offset 0x90
 __declspec(property(get=__get_m_Success, put=__set_m_Success)) bool  m_Success;

/// @brief Field m_Exception offset 0x98
 __declspec(property(get=__get_m_Exception, put=__set_m_Exception)) ::System::Exception*  m_Exception;

/// @brief Field m_ReleaseDependenciesOnFailure offset 0xa0
 __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure)) bool  m_ReleaseDependenciesOnFailure;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

constexpr void __set_m_Success(bool  value) ;

constexpr bool& __get_m_Success() ;

constexpr bool const& __get_m_Success() const;

constexpr void __set_m_Exception(::System::Exception*  value) ;

constexpr ::System::Exception* __get_m_Exception() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get_m_Exception() const;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool  value) ;

constexpr bool& __get_m_ReleaseDependenciesOnFailure() ;

constexpr bool const& __get_m_ReleaseDependenciesOnFailure() const;

static inline ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CompletedOperation_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ResourceManager__CompletedOperation_1(__ResourceManager__CompletedOperation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CompletedOperation_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ResourceManager__CompletedOperation_1(__ResourceManager__CompletedOperation_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ResourceManager__CompletedOperation_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::CompletedOperation`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13954)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 791 }), TypeDefinitionIndex(TypeDefinitionIndex(14032))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13954), inst: 333 })
// CS Name: ::ResourceManager::CompletedOperation`1<TObject>*
class CORDL_TYPE __ResourceManager__CompletedOperation_1<int64_t> : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>)]{};

/// @brief Field m_Success offset 0x88
 __declspec(property(get=__get_m_Success, put=__set_m_Success)) bool  m_Success;

/// @brief Field m_Exception offset 0x90
 __declspec(property(get=__get_m_Exception, put=__set_m_Exception)) ::System::Exception*  m_Exception;

/// @brief Field m_ReleaseDependenciesOnFailure offset 0x98
 __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure)) bool  m_ReleaseDependenciesOnFailure;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

constexpr void __set_m_Success(bool  value) ;

constexpr bool& __get_m_Success() ;

constexpr bool const& __get_m_Success() const;

constexpr void __set_m_Exception(::System::Exception*  value) ;

constexpr ::System::Exception* __get_m_Exception() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get_m_Exception() const;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool  value) ;

constexpr bool& __get_m_ReleaseDependenciesOnFailure() ;

constexpr bool const& __get_m_ReleaseDependenciesOnFailure() const;

static inline ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(int64_t  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(int64_t  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CompletedOperation_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ResourceManager__CompletedOperation_1(__ResourceManager__CompletedOperation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CompletedOperation_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ResourceManager__CompletedOperation_1(__ResourceManager__CompletedOperation_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ResourceManager__CompletedOperation_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::CompletedOperation`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13954)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 791 }), TypeDefinitionIndex(TypeDefinitionIndex(14032))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13954), inst: 105 })
// CS Name: ::ResourceManager::CompletedOperation`1<TObject>*
class CORDL_TYPE __ResourceManager__CompletedOperation_1<bool> : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>)]{};

/// @brief Field m_Success offset 0x88
 __declspec(property(get=__get_m_Success, put=__set_m_Success)) bool  m_Success;

/// @brief Field m_Exception offset 0x90
 __declspec(property(get=__get_m_Exception, put=__set_m_Exception)) ::System::Exception*  m_Exception;

/// @brief Field m_ReleaseDependenciesOnFailure offset 0x98
 __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure)) bool  m_ReleaseDependenciesOnFailure;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

constexpr void __set_m_Success(bool  value) ;

constexpr bool& __get_m_Success() ;

constexpr bool const& __get_m_Success() const;

constexpr void __set_m_Exception(::System::Exception*  value) ;

constexpr ::System::Exception* __get_m_Exception() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get_m_Exception() const;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool  value) ;

constexpr bool& __get_m_ReleaseDependenciesOnFailure() ;

constexpr bool const& __get_m_ReleaseDependenciesOnFailure() const;

static inline ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(bool  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(bool  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CompletedOperation_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ResourceManager__CompletedOperation_1(__ResourceManager__CompletedOperation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CompletedOperation_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ResourceManager__CompletedOperation_1(__ResourceManager__CompletedOperation_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ResourceManager__CompletedOperation_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::CompletedOperation`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 791 }), TypeDefinitionIndex(TypeDefinitionIndex(13954)), TypeDefinitionIndex(TypeDefinitionIndex(14032))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13954), inst: 2 })
// CS Name: ::ResourceManager::CompletedOperation`1<TObject>*
class CORDL_TYPE __ResourceManager__CompletedOperation_1<TObject> : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>)]{};

/// @brief Field m_Success offset 0x88
 __declspec(property(get=__get_m_Success, put=__set_m_Success)) bool  m_Success;

/// @brief Field m_Exception offset 0x90
 __declspec(property(get=__get_m_Exception, put=__set_m_Exception)) ::System::Exception*  m_Exception;

/// @brief Field m_ReleaseDependenciesOnFailure offset 0x98
 __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure)) bool  m_ReleaseDependenciesOnFailure;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

constexpr void __set_m_Success(bool  value) ;

constexpr bool& __get_m_Success() ;

constexpr bool const& __get_m_Success() const;

constexpr void __set_m_Exception(::System::Exception*  value) ;

constexpr ::System::Exception* __get_m_Exception() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get_m_Exception() const;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool  value) ;

constexpr bool& __get_m_ReleaseDependenciesOnFailure() ;

constexpr bool const& __get_m_ReleaseDependenciesOnFailure() const;

static inline ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(TObject  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(TObject  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CompletedOperation_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ResourceManager__CompletedOperation_1(__ResourceManager__CompletedOperation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CompletedOperation_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ResourceManager__CompletedOperation_1(__ResourceManager__CompletedOperation_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ResourceManager__CompletedOperation_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::<>c__DisplayClass92_0`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13956)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13956), inst: 2 })
// CS Name: ::ResourceManager::<>c__DisplayClass92_0`1<TObject>*
class CORDL_TYPE __ResourceManager____c__DisplayClass92_0_1<TObject> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field callback offset 0x10
 __declspec(property(get=__get_callback, put=__set_callback)) ::System::Action_1<TObject>*  callback;

/// @brief Field releaseDependenciesOnFailure offset 0x18
 __declspec(property(get=__get_releaseDependenciesOnFailure, put=__set_releaseDependenciesOnFailure)) bool  releaseDependenciesOnFailure;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::UnityEngine::ResourceManagement::ResourceManager*  __4__this;

constexpr void __set_callback(::System::Action_1<TObject>*  value) ;

constexpr ::System::Action_1<TObject>* __get_callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TObject>*> __get_callback() const;

constexpr void __set_releaseDependenciesOnFailure(bool  value) ;

constexpr bool& __get_releaseDependenciesOnFailure() ;

constexpr bool const& __get_releaseDependenciesOnFailure() const;

constexpr void __set___4__this(::UnityEngine::ResourceManagement::ResourceManager*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceManager* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> __get___4__this() const;

static inline ::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ProvideResources>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ProvideResources_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  x) ;

/// @brief Method <ProvideResources>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> _ProvideResources_b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  resultHandle) ;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager____c__DisplayClass92_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ResourceManager____c__DisplayClass92_0_1(__ResourceManager____c__DisplayClass92_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager____c__DisplayClass92_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ResourceManager____c__DisplayClass92_0_1(__ResourceManager____c__DisplayClass92_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ResourceManager____c__DisplayClass92_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1, "UnityEngine.ResourceManagement", "ResourceManager/CompletedOperation`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1, "UnityEngine.ResourceManagement", "ResourceManager/<>c__DisplayClass92_0`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, "UnityEngine.ResourceManagement", "ResourceManager/DiagnosticEventType");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceManager*, "UnityEngine.ResourceManagement", "ResourceManager");
NEED_NO_BOX(::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*, "UnityEngine.ResourceManagement", "ResourceManager/InstanceOperation");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest, "UnityEngine.ResourceManagement", "ResourceManager/DeferredCallbackRegisterRequest");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext, "UnityEngine.ResourceManagement", "ResourceManager/DiagnosticEventContext");
