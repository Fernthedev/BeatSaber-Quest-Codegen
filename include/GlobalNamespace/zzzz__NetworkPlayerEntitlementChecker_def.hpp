#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPlayerEntitlementChecker)
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
struct EntitlementsStatus;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayerEntitlementChecker;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkPlayerEntitlementChecker);
MARK_VAL_T(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6);
MARK_VAL_T(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5);
// Type: ::<HandleGetIsEntitledToLevel>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14963))
// CS Name: ::NetworkPlayerEntitlementChecker::<HandleGetIsEntitledToLevel>d__5
struct CORDL_TYPE __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::NetworkPlayerEntitlementChecker*  __4__this;

/// @brief Field levelId offset 0x30
 __declspec(property(get=__get_levelId, put=__set_levelId)) ::StringW  levelId;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerEntitlementChecker*  value) ;

constexpr ::GlobalNamespace::NetworkPlayerEntitlementChecker* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerEntitlementChecker*> __get___4__this() const;

constexpr void __set_levelId(::StringW  value) ;

constexpr ::StringW& __get_levelId() ;

constexpr ::StringW const& __get_levelId() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x26376ec size 0x260 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x263794c size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::NetworkPlayerEntitlementChecker*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None }]
constexpr __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::NetworkPlayerEntitlementChecker*  __4__this, ::StringW  levelId, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetEntitlementStatus>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14964))
// CS Name: ::NetworkPlayerEntitlementChecker::<GetEntitlementStatus>d__6
struct CORDL_TYPE __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::NetworkPlayerEntitlementChecker*  __4__this;

/// @brief Field levelId offset 0x28
 __declspec(property(get=__get_levelId, put=__set_levelId)) ::StringW  levelId;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerEntitlementChecker*  value) ;

constexpr ::GlobalNamespace::NetworkPlayerEntitlementChecker* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerEntitlementChecker*> __get___4__this() const;

constexpr void __set_levelId(::StringW  value) ;

constexpr ::StringW& __get_levelId() ;

constexpr ::StringW const& __get_levelId() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2637958 size 0x27c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2637bd4 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::NetworkPlayerEntitlementChecker*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
constexpr __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>  __t__builder, ::GlobalNamespace::NetworkPlayerEntitlementChecker*  __4__this, ::StringW  levelId, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NetworkPlayerEntitlementChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14965))
// CS Name: ::NetworkPlayerEntitlementChecker*
class CORDL_TYPE NetworkPlayerEntitlementChecker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GetEntitlementStatus_d__6 = ::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6;

using _HandleGetIsEntitledToLevel_d__5 = ::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _rpcManager offset 0x18
 __declspec(property(get=__get__rpcManager, put=__set__rpcManager)) ::GlobalNamespace::IMenuRpcManager*  _rpcManager;

/// @brief Field _additionalContentModel offset 0x20
 __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel*  _additionalContentModel;

constexpr void __set__rpcManager(::GlobalNamespace::IMenuRpcManager*  value) ;

constexpr ::GlobalNamespace::IMenuRpcManager* __get__rpcManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> __get__rpcManager() const;

constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::IAdditionalContentModel* __get__additionalContentModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> __get__additionalContentModel() const;

/// @brief Method Start addr 0x26371ec size 0xf0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x26372dc size 0x1cc virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleDataInvalidated addr 0x26374a8 size 0xa4 virtual false final false
inline void HandleDataInvalidated() ;

/// @brief Method HandleGetIsEntitledToLevel addr 0x263754c size 0x9c virtual false final false
inline void HandleGetIsEntitledToLevel(::StringW  userId, ::StringW  levelId) ;

/// @brief Method GetEntitlementStatus addr 0x26375e8 size 0xfc virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>* GetEntitlementStatus(::StringW  levelId) ;

static inline ::GlobalNamespace::NetworkPlayerEntitlementChecker* New_ctor() ;

/// @brief Method .ctor addr 0x26376e4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerEntitlementChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkPlayerEntitlementChecker(NetworkPlayerEntitlementChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerEntitlementChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkPlayerEntitlementChecker(NetworkPlayerEntitlementChecker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetworkPlayerEntitlementChecker()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayerEntitlementChecker, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayerEntitlementChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerEntitlementChecker*, "", "NetworkPlayerEntitlementChecker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, "", "NetworkPlayerEntitlementChecker/<GetEntitlementStatus>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5, "", "NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__5");
