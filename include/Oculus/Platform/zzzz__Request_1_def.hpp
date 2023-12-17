#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Request_1)
namespace Oculus::Platform {
template<typename T>
class __Message_1__Callback;
}
namespace Oculus::Platform {
class Message;
}
// Forward declare root types
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
template<::il2cpp_utils::il2cpp_reference_type T>
class Request_1<T>;
}
namespace Oculus::Platform {
template<>
class Request_1<bool>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Oculus::Platform::Request_1);
// Type: Oculus.Platform::Request`1
// Type: Oculus.Platform::Request`1
namespace Oculus::Platform {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13381)), TypeDefinitionIndex(TypeDefinitionIndex(13380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13380), inst: 105 })
// CS Name: ::Oculus.Platform::Request`1<T>*
class CORDL_TYPE Request_1<bool> : public ::Oculus::Platform::Request {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Oculus::Platform::Request)]{};

/// @brief Field callback_ offset 0x20
 __declspec(property(get=__get_callback_, put=__set_callback_)) ::Oculus::Platform::__Message_1__Callback<bool>*  callback_;

constexpr void __set_callback_(::Oculus::Platform::__Message_1__Callback<bool>*  value) ;

constexpr ::Oculus::Platform::__Message_1__Callback<bool>* __get_callback_() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<bool>*> __get_callback_() const;

static inline ::Oculus::Platform::Request_1<bool>* New_ctor(uint64_t  requestID) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint64_t  requestID) ;

/// @brief Method OnComplete addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Oculus::Platform::Request_1<bool>* OnComplete(::Oculus::Platform::__Message_1__Callback<bool>*  callback) ;

/// @brief Method HandleMessage addr 0x0 size 0xffffffffffffffff virtual true final false
inline void HandleMessage(::Oculus::Platform::Message*  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Request_1(Request_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Request_1(Request_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Request_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::Request`1
namespace Oculus::Platform {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13381)), TypeDefinitionIndex(TypeDefinitionIndex(13380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13380), inst: 2 })
// CS Name: ::Oculus.Platform::Request`1<T>*
class CORDL_TYPE Request_1<T> : public ::Oculus::Platform::Request {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Oculus::Platform::Request)]{};

/// @brief Field callback_ offset 0x20
 __declspec(property(get=__get_callback_, put=__set_callback_)) ::Oculus::Platform::__Message_1__Callback<T>*  callback_;

constexpr void __set_callback_(::Oculus::Platform::__Message_1__Callback<T>*  value) ;

constexpr ::Oculus::Platform::__Message_1__Callback<T>* __get_callback_() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<T>*> __get_callback_() const;

static inline ::Oculus::Platform::Request_1<T>* New_ctor(uint64_t  requestID) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint64_t  requestID) ;

/// @brief Method OnComplete addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Oculus::Platform::Request_1<T>* OnComplete(::Oculus::Platform::__Message_1__Callback<T>*  callback) ;

/// @brief Method HandleMessage addr 0x0 size 0xffffffffffffffff virtual true final false
inline void HandleMessage(::Oculus::Platform::Message*  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Request_1(Request_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Request_1(Request_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Request_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::Request_1, "Oculus.Platform", "Request`1");
