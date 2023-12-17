#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Message_1)
namespace Oculus::Platform {
template<typename T>
class __Message_1__Callback;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace Oculus::Platform {
template<typename T>
class __Message_1__Callback;
}
namespace Oculus::Platform {
template<::il2cpp_utils::il2cpp_reference_type T>
class Message_1<T>;
}
namespace Oculus::Platform {
template<>
class Message_1<bool>;
}
namespace Oculus::Platform {
template<::il2cpp_utils::il2cpp_reference_type T>
class __Message_1__Callback<T>;
}
namespace Oculus::Platform {
template<>
class __Message_1__Callback<bool>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Oculus::Platform::Message_1);
MARK_GEN_REF_PTR_T(::Oculus::Platform::__Message_1__Callback);
// Type: ::Callback
// Type: Oculus.Platform::Message`1
// Type: ::Callback
namespace Oculus::Platform {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(13261))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13261), inst: 105 })
// CS Name: ::Message`1::Callback<T>*
class CORDL_TYPE __Message_1__Callback<bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Oculus::Platform::__Message_1__Callback<bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::Oculus::Platform::Message_1<bool>*  message) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::Oculus::Platform::Message_1<bool>*  message, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__Message_1__Callback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Message_1__Callback(__Message_1__Callback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Message_1__Callback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Message_1__Callback(__Message_1__Callback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Message_1__Callback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::Callback
namespace Oculus::Platform {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13261)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13261), inst: 2 })
// CS Name: ::Message`1::Callback<T>*
class CORDL_TYPE __Message_1__Callback<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Oculus::Platform::__Message_1__Callback<T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::Oculus::Platform::Message_1<T>*  message) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::Oculus::Platform::Message_1<T>*  message, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__Message_1__Callback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Message_1__Callback(__Message_1__Callback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Message_1__Callback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Message_1__Callback(__Message_1__Callback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Message_1__Callback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::Message`1
namespace Oculus::Platform {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13266))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 105 })
// CS Name: ::Oculus.Platform::Message`1<T>*
class CORDL_TYPE Message_1<bool> : public ::Oculus::Platform::Message {
public:
// Declarations
using Callback = ::Oculus::Platform::__Message_1__Callback<bool>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message)]{};

/// @brief Field data offset 0x28
 __declspec(property(get=__get_data, put=__set_data)) bool  data;

 __declspec(property(get=get_Data)) bool  Data;

constexpr void __set_data(bool  value) ;

constexpr bool& __get_data() ;

constexpr bool const& __get_data() const;

static inline ::Oculus::Platform::Message_1<bool>* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method get_Data addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Data() ;

/// @brief Method GetDataFromMessage addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "Message_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Message_1(Message_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Message_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Message_1(Message_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Message_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::Message`1
namespace Oculus::Platform {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13266))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 2 })
// CS Name: ::Oculus.Platform::Message`1<T>*
class CORDL_TYPE Message_1<T> : public ::Oculus::Platform::Message {
public:
// Declarations
using Callback = ::Oculus::Platform::__Message_1__Callback<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message)]{};

/// @brief Field data offset 0x28
 __declspec(property(get=__get_data, put=__set_data)) T  data;

 __declspec(property(get=get_Data)) T  Data;

constexpr void __set_data(T  value) ;

constexpr T& __get_data() ;

constexpr T const& __get_data() const;

static inline ::Oculus::Platform::Message_1<T>* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method get_Data addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Data() ;

/// @brief Method GetDataFromMessage addr 0x0 size 0xffffffffffffffff virtual true final false
inline T GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "Message_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Message_1(Message_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Message_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Message_1(Message_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Message_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::Message_1, "Oculus.Platform", "Message`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::__Message_1__Callback, "Oculus.Platform", "Message`1/Callback");
