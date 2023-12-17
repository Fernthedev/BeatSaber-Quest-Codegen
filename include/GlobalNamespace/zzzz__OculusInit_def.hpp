#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasePlatformInit_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusInit)
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeInternalAsync_d__7;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass9_0;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusInit;
}
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeInternalAsync_d__7;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusInit);
MARK_REF_PTR_T(::GlobalNamespace::__OculusInit____c__DisplayClass10_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusInit____c__DisplayClass8_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusInit____c__DisplayClass9_0);
MARK_VAL_T(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7);
// Type: ::<InitializeInternalAsync>d__7
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4030))
// CS Name: ::OculusInit::<InitializeInternalAsync>d__7
struct CORDL_TYPE __OculusInit___InitializeInternalAsync_d__7 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusInit*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::OculusInit*  value) ;

constexpr ::GlobalNamespace::OculusInit* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusInit*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2228f08 size 0x318 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2229220 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusInit*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr __OculusInit___InitializeInternalAsync_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::GlobalNamespace::OculusInit*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusInit___InitializeInternalAsync_d__7(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusInit___InitializeInternalAsync_d__7()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass8_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4031))
// CS Name: ::OculusInit::<>c__DisplayClass8_0*
class CORDL_TYPE __OculusInit____c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field tcs offset 0x10
 __declspec(property(get=__get_tcs, put=__set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* __get_tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> __get_tcs() const;

static inline ::GlobalNamespace::__OculusInit____c__DisplayClass8_0* New_ctor() ;

/// @brief Method .ctor addr 0x2228d2c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <TryToInitialize>b__0 addr 0x2229278 size 0xe0 virtual false final false
inline void _TryToInitialize_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusInit____c__DisplayClass8_0(__OculusInit____c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusInit____c__DisplayClass8_0(__OculusInit____c__DisplayClass8_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusInit____c__DisplayClass8_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit____c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass9_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4032))
// CS Name: ::OculusInit::<>c__DisplayClass9_0*
class CORDL_TYPE __OculusInit____c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field tcs offset 0x10
 __declspec(property(get=__get_tcs, put=__set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusInit*  __4__this;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* __get_tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> __get_tcs() const;

constexpr void __set___4__this(::GlobalNamespace::OculusInit*  value) ;

constexpr ::GlobalNamespace::OculusInit* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusInit*> __get___4__this() const;

static inline ::GlobalNamespace::__OculusInit____c__DisplayClass9_0* New_ctor() ;

/// @brief Method .ctor addr 0x2228ef8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <CheckUserAgeCategory>b__0 addr 0x22293f0 size 0x174 virtual false final false
inline void _CheckUserAgeCategory_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*  uacMessage) ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusInit____c__DisplayClass9_0(__OculusInit____c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusInit____c__DisplayClass9_0(__OculusInit____c__DisplayClass9_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusInit____c__DisplayClass9_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit____c__DisplayClass9_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass10_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4033))
// CS Name: ::OculusInit::<>c__DisplayClass10_0*
class CORDL_TYPE __OculusInit____c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field tcs offset 0x10
 __declspec(property(get=__get_tcs, put=__set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* __get_tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> __get_tcs() const;

static inline ::GlobalNamespace::__OculusInit____c__DisplayClass10_0* New_ctor() ;

/// @brief Method .ctor addr 0x2228f00 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <CheckEntitlements>b__0 addr 0x2229564 size 0x104 virtual false final false
inline void _CheckEntitlements_b__0(::Oculus::Platform::Message*  message) ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusInit____c__DisplayClass10_0(__OculusInit____c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusInit____c__DisplayClass10_0(__OculusInit____c__DisplayClass10_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusInit____c__DisplayClass10_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit____c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OculusInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15978))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4034))
// CS Name: ::OculusInit*
class CORDL_TYPE OculusInit : public ::GlobalNamespace::BasePlatformInit {
public:
// Declarations
using __c__DisplayClass10_0 = ::GlobalNamespace::__OculusInit____c__DisplayClass10_0;

using __c__DisplayClass9_0 = ::GlobalNamespace::__OculusInit____c__DisplayClass9_0;

using __c__DisplayClass8_0 = ::GlobalNamespace::__OculusInit____c__DisplayClass8_0;

using _InitializeInternalAsync_d__7 = ::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::BasePlatformInit)]{};

/// @brief Field kPlatformNotInstalledMessage offset 0x0
static constexpr ::ConstString  kPlatformNotInstalledMessage{u"Install the Oculus app to support Oculus platform on PC from: https://www.meta.com/help/quest/articles/getting-started/getting-started-with-rift-s/install-oculus-pc-app/"};

/// @brief Field _playerDataModel offset 0x20
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field <userAgeCategoryReceivedOrTimedOut>k__BackingField offset 0x28
 __declspec(property(get=__get__userAgeCategoryReceivedOrTimedOut_k__BackingField, put=__set__userAgeCategoryReceivedOrTimedOut_k__BackingField)) bool  _userAgeCategoryReceivedOrTimedOut_k__BackingField;

 __declspec(property(get=get_userAgeCategoryReceivedOrTimedOut, put=set_userAgeCategoryReceivedOrTimedOut)) bool  userAgeCategoryReceivedOrTimedOut;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__userAgeCategoryReceivedOrTimedOut_k__BackingField(bool  value) ;

constexpr bool& __get__userAgeCategoryReceivedOrTimedOut_k__BackingField() ;

constexpr bool const& __get__userAgeCategoryReceivedOrTimedOut_k__BackingField() const;

/// @brief Method get_userAgeCategoryReceivedOrTimedOut addr 0x2228954 size 0x8 virtual false final false
inline bool get_userAgeCategoryReceivedOrTimedOut() ;

/// @brief Method set_userAgeCategoryReceivedOrTimedOut addr 0x222895c size 0xc virtual false final false
inline void set_userAgeCategoryReceivedOrTimedOut(bool  value) ;

static inline ::GlobalNamespace::OculusInit* New_ctor() ;

/// @brief Method .ctor addr 0x2228968 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method InitializeInternalAsync addr 0x2228970 size 0xf8 virtual true final false
inline ::System::Threading::Tasks::Task_1<bool>* InitializeInternalAsync() ;

/// @brief Method TryToInitialize addr 0x2228a68 size 0x2c4 virtual false final false
inline void TryToInitialize(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs) ;

/// @brief Method CheckUserAgeCategory addr 0x2228d34 size 0xe8 virtual false final false
inline void CheckUserAgeCategory(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs) ;

/// @brief Method CheckEntitlements addr 0x2228e1c size 0xc8 virtual false final false
inline void CheckEntitlements(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs) ;

// Ctor Parameters [CppParam { name: "", ty: "OculusInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusInit(OculusInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusInit(OculusInit const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusInit()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusInit, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusInit*, "", "OculusInit");
NEED_NO_BOX(::GlobalNamespace::__OculusInit____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit____c__DisplayClass10_0*, "", "OculusInit/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::__OculusInit____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit____c__DisplayClass8_0*, "", "OculusInit/<>c__DisplayClass8_0");
NEED_NO_BOX(::GlobalNamespace::__OculusInit____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit____c__DisplayClass9_0*, "", "OculusInit/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7, "", "OculusInit/<InitializeInternalAsync>d__7");
