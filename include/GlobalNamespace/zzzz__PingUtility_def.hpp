#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PingUtility)
namespace GlobalNamespace {
class __PingUtility____c;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __PingUtility___PingAsync_d__0;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Ping;
}
namespace System::Net {
class IPAddress;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
class PingUtility;
}
namespace GlobalNamespace {
class __PingUtility____c;
}
namespace GlobalNamespace {
struct __PingUtility___PingAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PingUtility);
MARK_REF_PTR_T(::GlobalNamespace::__PingUtility____c);
MARK_VAL_T(::GlobalNamespace::__PingUtility___PingAsync_d__0);
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12921))
// CS Name: ::PingUtility::<>c*
class CORDL_TYPE __PingUtility____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__PingUtility____c*  value) ;

static inline ::GlobalNamespace::__PingUtility____c* getStaticF___9() ;

static inline void setStaticF___9__0_0(::System::Func_2<::System::Net::IPAddress*,::UnityEngine::Ping*>*  value) ;

static inline ::System::Func_2<::System::Net::IPAddress*,::UnityEngine::Ping*>* getStaticF___9__0_0() ;

static inline ::GlobalNamespace::__PingUtility____c* New_ctor() ;

/// @brief Method .ctor addr 0xe51740 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PingAsync>b__0_0 addr 0xe51748 size 0x80 virtual false final false
inline ::UnityEngine::Ping* _PingAsync_b__0_0(::System::Net::IPAddress*  ip) ;

// Ctor Parameters [CppParam { name: "", ty: "__PingUtility____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PingUtility____c(__PingUtility____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PingUtility____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PingUtility____c(__PingUtility____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PingUtility____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__0_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PingUtility____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<PingAsync>d__0
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12922))
// CS Name: ::PingUtility::<PingAsync>d__0
struct CORDL_TYPE __PingUtility___PingAsync_d__0 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>  __t__builder;

/// @brief Field url offset 0x20
 __declspec(property(get=__get_url, put=__set_url)) ::StringW  url;

/// @brief Field <pings>5__2 offset 0x28
 __declspec(property(get=__get__pings_5__2, put=__set__pings_5__2)) ::ArrayW<::UnityEngine::Ping*,::Array<::UnityEngine::Ping*>*>  _pings_5__2;

/// @brief Field <ping>5__3 offset 0x30
 __declspec(property(get=__get__ping_5__3, put=__set__ping_5__3)) int64_t  _ping_5__3;

/// @brief Field <found>5__4 offset 0x38
 __declspec(property(get=__get__found_5__4, put=__set__found_5__4)) bool  _found_5__4;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>  __u__1;

/// @brief Field <t>5__5 offset 0x48
 __declspec(property(get=__get__t_5__5, put=__set__t_5__5)) int32_t  _t_5__5;

/// @brief Field <>u__2 offset 0x50
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> const& __get___t__builder() const;

constexpr void __set_url(::StringW  value) ;

constexpr ::StringW& __get_url() ;

constexpr ::StringW const& __get_url() const;

constexpr void __set__pings_5__2(::ArrayW<::UnityEngine::Ping*,::Array<::UnityEngine::Ping*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Ping*,::Array<::UnityEngine::Ping*>*>& __get__pings_5__2() ;

constexpr ::ArrayW<::UnityEngine::Ping*,::Array<::UnityEngine::Ping*>*> const& __get__pings_5__2() const;

constexpr void __set__ping_5__3(int64_t  value) ;

constexpr int64_t& __get__ping_5__3() ;

constexpr int64_t const& __get__ping_5__3() const;

constexpr void __set__found_5__4(bool  value) ;

constexpr bool& __get__found_5__4() ;

constexpr bool const& __get__found_5__4() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>> const& __get___u__1() const;

constexpr void __set__t_5__5(int32_t  value) ;

constexpr int32_t& __get__t_5__5() ;

constexpr int32_t const& __get__t_5__5() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0xe517c8 size 0x52c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe51cf4 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_pings_5__2", ty: "::ArrayW<::UnityEngine::Ping*,::Array<::UnityEngine::Ping*>*>", modifiers: "", def_value: None }, CppParam { name: "_ping_5__3", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_found_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>", modifiers: "", def_value: None }, CppParam { name: "_t_5__5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __PingUtility___PingAsync_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>  __t__builder, ::StringW  url, ::ArrayW<::UnityEngine::Ping*,::Array<::UnityEngine::Ping*>*>  _pings_5__2, int64_t  _ping_5__3, bool  _found_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>  __u__1, int32_t  _t_5__5, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PingUtility___PingAsync_d__0(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PingUtility___PingAsync_d__0()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PingUtility___PingAsync_d__0, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PingUtility
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12923))
// CS Name: ::PingUtility*
class CORDL_TYPE PingUtility : public ::System::Object {
public:
// Declarations
using _PingAsync_d__0 = ::GlobalNamespace::__PingUtility___PingAsync_d__0;

using __c = ::GlobalNamespace::__PingUtility____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method PingAsync addr 0xe515dc size 0x100 virtual false final false
static inline ::System::Threading::Tasks::Task_1<int64_t>* PingAsync(::StringW  url) ;

// Ctor Parameters [CppParam { name: "", ty: "PingUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PingUtility(PingUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PingUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PingUtility(PingUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PingUtility()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PingUtility, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PingUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PingUtility*, "", "PingUtility");
NEED_NO_BOX(::GlobalNamespace::__PingUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PingUtility____c*, "", "PingUtility/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PingUtility___PingAsync_d__0, "", "PingUtility/<PingAsync>d__0");
