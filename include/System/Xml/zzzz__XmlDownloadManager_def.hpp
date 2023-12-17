#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDownloadManager)
namespace System {
class Uri;
}
namespace System::IO {
class Stream;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml {
class __XmlDownloadManager____c__DisplayClass4_0;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class ICredentials;
}
namespace System::Xml {
struct __XmlDownloadManager___GetNonFileStreamAsync_d__5;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Net {
class WebRequest;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Net {
class WebResponse;
}
// Forward declare root types
namespace System::Xml {
class XmlDownloadManager;
}
namespace System::Xml {
class __XmlDownloadManager____c__DisplayClass4_0;
}
namespace System::Xml {
struct __XmlDownloadManager___GetNonFileStreamAsync_d__5;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDownloadManager);
MARK_REF_PTR_T(::System::Xml::__XmlDownloadManager____c__DisplayClass4_0);
MARK_VAL_T(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5);
// Type: ::<>c__DisplayClass4_0
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11549))
// CS Name: ::XmlDownloadManager::<>c__DisplayClass4_0*
class CORDL_TYPE __XmlDownloadManager____c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field uri offset 0x10
 __declspec(property(get=__get_uri, put=__set_uri)) ::System::Uri*  uri;

constexpr void __set_uri(::System::Uri*  value) ;

constexpr ::System::Uri* __get_uri() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> __get_uri() const;

static inline ::System::Xml::__XmlDownloadManager____c__DisplayClass4_0* New_ctor() ;

/// @brief Method .ctor addr 0x28a4710 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetStreamAsync>b__0 addr 0x28a4838 size 0x90 virtual false final false
inline ::System::IO::Stream* _GetStreamAsync_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__XmlDownloadManager____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__XmlDownloadManager____c__DisplayClass4_0(__XmlDownloadManager____c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__XmlDownloadManager____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__XmlDownloadManager____c__DisplayClass4_0(__XmlDownloadManager____c__DisplayClass4_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __XmlDownloadManager____c__DisplayClass4_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlDownloadManager____c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace end def System::Xml
// Type: ::<GetNonFileStreamAsync>d__5
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11550))
// CS Name: ::XmlDownloadManager::<GetNonFileStreamAsync>d__5
struct CORDL_TYPE __XmlDownloadManager___GetNonFileStreamAsync_d__5 : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder;

/// @brief Field uri offset 0x20
 __declspec(property(get=__get_uri, put=__set_uri)) ::System::Uri*  uri;

/// @brief Field credentials offset 0x28
 __declspec(property(get=__get_credentials, put=__set_credentials)) ::System::Net::ICredentials*  credentials;

/// @brief Field proxy offset 0x30
 __declspec(property(get=__get_proxy, put=__set_proxy)) ::System::Net::IWebProxy*  proxy;

/// @brief Field cachePolicy offset 0x38
 __declspec(property(get=__get_cachePolicy, put=__set_cachePolicy)) ::System::Net::Cache::RequestCachePolicy*  cachePolicy;

/// @brief Field <>4__this offset 0x40
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Xml::XmlDownloadManager*  __4__this;

/// @brief Field <req>5__2 offset 0x48
 __declspec(property(get=__get__req_5__2, put=__set__req_5__2)) ::System::Net::WebRequest*  _req_5__2;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> const& __get___t__builder() const;

constexpr void __set_uri(::System::Uri*  value) ;

constexpr ::System::Uri* __get_uri() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> __get_uri() const;

constexpr void __set_credentials(::System::Net::ICredentials*  value) ;

constexpr ::System::Net::ICredentials* __get_credentials() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> __get_credentials() const;

constexpr void __set_proxy(::System::Net::IWebProxy*  value) ;

constexpr ::System::Net::IWebProxy* __get_proxy() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> __get_proxy() const;

constexpr void __set_cachePolicy(::System::Net::Cache::RequestCachePolicy*  value) ;

constexpr ::System::Net::Cache::RequestCachePolicy* __get_cachePolicy() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCachePolicy*> __get_cachePolicy() const;

constexpr void __set___4__this(::System::Xml::XmlDownloadManager*  value) ;

constexpr ::System::Xml::XmlDownloadManager* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDownloadManager*> __get___4__this() const;

constexpr void __set__req_5__2(::System::Net::WebRequest*  value) ;

constexpr ::System::Net::WebRequest* __get__req_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequest*> __get__req_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x28a48c8 size 0x774 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x28a503c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "credentials", ty: "::System::Net::ICredentials*", modifiers: "", def_value: None }, CppParam { name: "proxy", ty: "::System::Net::IWebProxy*", modifiers: "", def_value: None }, CppParam { name: "cachePolicy", ty: "::System::Net::Cache::RequestCachePolicy*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Xml::XmlDownloadManager*", modifiers: "", def_value: None }, CppParam { name: "_req_5__2", ty: "::System::Net::WebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>", modifiers: "", def_value: None }]
constexpr __XmlDownloadManager___GetNonFileStreamAsync_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder, ::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy, ::System::Xml::XmlDownloadManager*  __4__this, ::System::Net::WebRequest*  _req_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XmlDownloadManager___GetNonFileStreamAsync_d__5(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XmlDownloadManager___GetNonFileStreamAsync_d__5()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, 0x60>, "Size mismatch!");

} // namespace end def System::Xml
// Type: System.Xml::XmlDownloadManager
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11551))
// CS Name: ::System.Xml::XmlDownloadManager*
class CORDL_TYPE XmlDownloadManager : public ::System::Object {
public:
// Declarations
using _GetNonFileStreamAsync_d__5 = ::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5;

using __c__DisplayClass4_0 = ::System::Xml::__XmlDownloadManager____c__DisplayClass4_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field connections offset 0x10
 __declspec(property(get=__get_connections, put=__set_connections)) ::System::Collections::Hashtable*  connections;

constexpr void __set_connections(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get_connections() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get_connections() const;

/// @brief Method GetStream addr 0x28a3cb0 size 0x104 virtual false final false
inline ::System::IO::Stream* GetStream(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy) ;

/// @brief Method GetNonFileStream addr 0x28a3db4 size 0x490 virtual false final false
inline ::System::IO::Stream* GetNonFileStream(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy) ;

/// @brief Method Remove addr 0x28a4440 size 0x16c virtual false final false
inline void Remove(::StringW  host) ;

/// @brief Method GetStreamAsync addr 0x28a45ac size 0x164 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetStreamAsync(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy) ;

/// @brief Method GetNonFileStreamAsync addr 0x28a4718 size 0x118 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetNonFileStreamAsync(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy) ;

static inline ::System::Xml::XmlDownloadManager* New_ctor() ;

/// @brief Method .ctor addr 0x28a4830 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlDownloadManager(XmlDownloadManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlDownloadManager(XmlDownloadManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlDownloadManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDownloadManager, 0x18>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlDownloadManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDownloadManager*, "System.Xml", "XmlDownloadManager");
NEED_NO_BOX(::System::Xml::__XmlDownloadManager____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlDownloadManager____c__DisplayClass4_0*, "System.Xml", "XmlDownloadManager/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, "System.Xml", "XmlDownloadManager/<GetNonFileStreamAsync>d__5");
