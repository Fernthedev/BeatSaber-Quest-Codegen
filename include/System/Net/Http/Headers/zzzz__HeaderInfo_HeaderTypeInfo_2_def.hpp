#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__HeaderInfo_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeaderInfo_HeaderTypeInfo_2)
namespace System {
class Object;
}
namespace System::Net::Http::Headers {
class HttpHeaders;
}
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
namespace System {
struct DateTimeOffset;
}
namespace System::Net::Http::Headers {
template<typename T>
class TryParseDelegate_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net::Http::Headers {
class HeaderInfo;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http::Headers {
template<typename T,typename U>
class __HeaderInfo__HeaderTypeInfo_2;
}
namespace System::Net::Http::Headers {
template<::il2cpp_utils::il2cpp_reference_type U>
class __HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>;
}
namespace System::Net::Http::Headers {
template<::il2cpp_utils::il2cpp_reference_type U>
class __HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>;
}
namespace System::Net::Http::Headers {
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
class __HeaderInfo__HeaderTypeInfo_2<T,U>;
}
namespace System::Net::Http::Headers {
template<::il2cpp_utils::il2cpp_reference_type U>
class __HeaderInfo__HeaderTypeInfo_2<int32_t,U>;
}
namespace System::Net::Http::Headers {
template<::il2cpp_utils::il2cpp_reference_type U>
class __HeaderInfo__HeaderTypeInfo_2<int64_t,U>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2);
// Type: ::HeaderTypeInfo`2
// Type: ::HeaderTypeInfo`2
namespace System::Net::Http::Headers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type U>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14671)), TypeDefinitionIndex(TypeDefinitionIndex(14669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14669), inst: 7750 })
// CS Name: ::HeaderInfo::HeaderTypeInfo`2<T,U>*
class CORDL_TYPE __HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U> : public ::System::Net::Http::Headers::HeaderInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Net::Http::Headers::HeaderInfo)]{};

/// @brief Field parser offset 0x28
 __declspec(property(get=__get_parser, put=__set_parser)) ::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*  parser;

constexpr void __set_parser(::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*  value) ;

constexpr ::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>* __get_parser() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*> __get_parser() const;

static inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>* New_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind) ;

/// @brief Method AddToCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddToCollection(::System::Object*  collection, ::System::Object*  value) ;

/// @brief Method CreateCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo) ;

/// @brief Method ToStringCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::List_1<::StringW>* ToStringCollection(::System::Object*  collection) ;

/// @brief Method TryParse addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TryParse(::StringW  value, ByRef<::System::Object*>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HeaderInfo__HeaderTypeInfo_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::HeaderTypeInfo`2
namespace System::Net::Http::Headers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type U>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14669)), TypeDefinitionIndex(TypeDefinitionIndex(14671))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14669), inst: 7749 })
// CS Name: ::HeaderInfo::HeaderTypeInfo`2<T,U>*
class CORDL_TYPE __HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U> : public ::System::Net::Http::Headers::HeaderInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Net::Http::Headers::HeaderInfo)]{};

/// @brief Field parser offset 0x28
 __declspec(property(get=__get_parser, put=__set_parser)) ::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*  parser;

constexpr void __set_parser(::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*  value) ;

constexpr ::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>* __get_parser() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*> __get_parser() const;

static inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>* New_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind) ;

/// @brief Method AddToCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddToCollection(::System::Object*  collection, ::System::Object*  value) ;

/// @brief Method CreateCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo) ;

/// @brief Method ToStringCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::List_1<::StringW>* ToStringCollection(::System::Object*  collection) ;

/// @brief Method TryParse addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TryParse(::StringW  value, ByRef<::System::Object*>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HeaderInfo__HeaderTypeInfo_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::HeaderTypeInfo`2
namespace System::Net::Http::Headers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type U>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14669)), TypeDefinitionIndex(TypeDefinitionIndex(14671))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14669), inst: 1618 })
// CS Name: ::HeaderInfo::HeaderTypeInfo`2<T,U>*
class CORDL_TYPE __HeaderInfo__HeaderTypeInfo_2<int64_t,U> : public ::System::Net::Http::Headers::HeaderInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Net::Http::Headers::HeaderInfo)]{};

/// @brief Field parser offset 0x28
 __declspec(property(get=__get_parser, put=__set_parser)) ::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*  parser;

constexpr void __set_parser(::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*  value) ;

constexpr ::System::Net::Http::Headers::TryParseDelegate_1<int64_t>* __get_parser() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*> __get_parser() const;

static inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>* New_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind) ;

/// @brief Method AddToCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddToCollection(::System::Object*  collection, ::System::Object*  value) ;

/// @brief Method CreateCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo) ;

/// @brief Method ToStringCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::List_1<::StringW>* ToStringCollection(::System::Object*  collection) ;

/// @brief Method TryParse addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TryParse(::StringW  value, ByRef<::System::Object*>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HeaderInfo__HeaderTypeInfo_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::HeaderTypeInfo`2
namespace System::Net::Http::Headers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type U>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14669)), TypeDefinitionIndex(TypeDefinitionIndex(14671))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14669), inst: 1610 })
// CS Name: ::HeaderInfo::HeaderTypeInfo`2<T,U>*
class CORDL_TYPE __HeaderInfo__HeaderTypeInfo_2<int32_t,U> : public ::System::Net::Http::Headers::HeaderInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Net::Http::Headers::HeaderInfo)]{};

/// @brief Field parser offset 0x28
 __declspec(property(get=__get_parser, put=__set_parser)) ::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*  parser;

constexpr void __set_parser(::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*  value) ;

constexpr ::System::Net::Http::Headers::TryParseDelegate_1<int32_t>* __get_parser() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*> __get_parser() const;

static inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>* New_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind) ;

/// @brief Method AddToCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddToCollection(::System::Object*  collection, ::System::Object*  value) ;

/// @brief Method CreateCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo) ;

/// @brief Method ToStringCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::List_1<::StringW>* ToStringCollection(::System::Object*  collection) ;

/// @brief Method TryParse addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TryParse(::StringW  value, ByRef<::System::Object*>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HeaderInfo__HeaderTypeInfo_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::HeaderTypeInfo`2
namespace System::Net::Http::Headers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14669)), TypeDefinitionIndex(TypeDefinitionIndex(14671))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14669), inst: 81 })
// CS Name: ::HeaderInfo::HeaderTypeInfo`2<T,U>*
class CORDL_TYPE __HeaderInfo__HeaderTypeInfo_2<T,U> : public ::System::Net::Http::Headers::HeaderInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Net::Http::Headers::HeaderInfo)]{};

/// @brief Field parser offset 0x28
 __declspec(property(get=__get_parser, put=__set_parser)) ::System::Net::Http::Headers::TryParseDelegate_1<T>*  parser;

constexpr void __set_parser(::System::Net::Http::Headers::TryParseDelegate_1<T>*  value) ;

constexpr ::System::Net::Http::Headers::TryParseDelegate_1<T>* __get_parser() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<T>*> __get_parser() const;

static inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>* New_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<T>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<T>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind) ;

/// @brief Method AddToCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddToCollection(::System::Object*  collection, ::System::Object*  value) ;

/// @brief Method CreateCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo) ;

/// @brief Method ToStringCollection addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::List_1<::StringW>* ToStringCollection(::System::Object*  collection) ;

/// @brief Method TryParse addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TryParse(::StringW  value, ByRef<::System::Object*>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HeaderInfo__HeaderTypeInfo_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2, "System.Net.Http.Headers", "HeaderInfo/HeaderTypeInfo`2");
