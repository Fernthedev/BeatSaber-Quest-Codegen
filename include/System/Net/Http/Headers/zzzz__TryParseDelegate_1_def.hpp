#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TryParseDelegate_1)
namespace System {
struct DateTimeOffset;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http::Headers {
template<typename T>
class TryParseDelegate_1;
}
namespace System::Net::Http::Headers {
template<>
class TryParseDelegate_1<::System::DateTimeOffset>;
}
namespace System::Net::Http::Headers {
template<>
class TryParseDelegate_1<::System::TimeSpan>;
}
namespace System::Net::Http::Headers {
template<::il2cpp_utils::il2cpp_reference_type T>
class TryParseDelegate_1<T>;
}
namespace System::Net::Http::Headers {
template<>
class TryParseDelegate_1<int32_t>;
}
namespace System::Net::Http::Headers {
template<>
class TryParseDelegate_1<int64_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Net::Http::Headers::TryParseDelegate_1);
// Type: System.Net.Http.Headers::TryParseDelegate`1
// Type: System.Net.Http.Headers::TryParseDelegate`1
namespace System::Net::Http::Headers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(14667))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14667), inst: 2711 })
// CS Name: ::System.Net.Http.Headers::TryParseDelegate`1<T>*
class CORDL_TYPE TryParseDelegate_1<::System::TimeSpan> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::StringW  value, ByRef<::System::TimeSpan>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TryParseDelegate_1(TryParseDelegate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TryParseDelegate_1(TryParseDelegate_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TryParseDelegate_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::TryParseDelegate`1
namespace System::Net::Http::Headers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14667)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14667), inst: 2702 })
// CS Name: ::System.Net.Http.Headers::TryParseDelegate`1<T>*
class CORDL_TYPE TryParseDelegate_1<::System::DateTimeOffset> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::StringW  value, ByRef<::System::DateTimeOffset>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TryParseDelegate_1(TryParseDelegate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TryParseDelegate_1(TryParseDelegate_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TryParseDelegate_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::TryParseDelegate`1
namespace System::Net::Http::Headers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14667)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14667), inst: 333 })
// CS Name: ::System.Net.Http.Headers::TryParseDelegate`1<T>*
class CORDL_TYPE TryParseDelegate_1<int64_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Net::Http::Headers::TryParseDelegate_1<int64_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::StringW  value, ByRef<int64_t>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TryParseDelegate_1(TryParseDelegate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TryParseDelegate_1(TryParseDelegate_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TryParseDelegate_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::TryParseDelegate`1
namespace System::Net::Http::Headers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(14667))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14667), inst: 98 })
// CS Name: ::System.Net.Http.Headers::TryParseDelegate`1<T>*
class CORDL_TYPE TryParseDelegate_1<int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Net::Http::Headers::TryParseDelegate_1<int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::StringW  value, ByRef<int32_t>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TryParseDelegate_1(TryParseDelegate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TryParseDelegate_1(TryParseDelegate_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TryParseDelegate_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::TryParseDelegate`1
namespace System::Net::Http::Headers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(14667))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14667), inst: 2 })
// CS Name: ::System.Net.Http.Headers::TryParseDelegate`1<T>*
class CORDL_TYPE TryParseDelegate_1<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Net::Http::Headers::TryParseDelegate_1<T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::StringW  value, ByRef<T>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TryParseDelegate_1(TryParseDelegate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TryParseDelegate_1(TryParseDelegate_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TryParseDelegate_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::Http::Headers::TryParseDelegate_1, "System.Net.Http.Headers", "TryParseDelegate`1");
