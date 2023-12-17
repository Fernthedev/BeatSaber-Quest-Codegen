#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextWriter)
namespace System::IO {
class __TextWriter____c;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
class __TextWriter__NullTextWriter;
}
namespace System::IO {
class __TextWriter__SyncTextWriter;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IAsyncDisposable;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
class IDisposable;
}
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace System::IO {
class TextWriter;
}
namespace System::IO {
class __TextWriter____c;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::TextWriter);
MARK_REF_PTR_T(::System::IO::__TextWriter____c);
// Type: ::<>c
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3585))
// CS Name: ::TextWriter::<>c*
class CORDL_TYPE __TextWriter____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::IO::__TextWriter____c*  value) ;

static inline ::System::IO::__TextWriter____c* getStaticF___9() ;

static inline void setStaticF___9__67_0(::System::Action_1<::System::Object*>*  value) ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__67_0() ;

static inline ::System::IO::__TextWriter____c* New_ctor() ;

/// @brief Method .ctor addr 0x2507e14 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <FlushAsync>b__67_0 addr 0x2507e1c size 0xac virtual false final false
inline void _FlushAsync_b__67_0(::System::Object*  state) ;

// Ctor Parameters [CppParam { name: "", ty: "__TextWriter____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TextWriter____c(__TextWriter____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TextWriter____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TextWriter____c(__TextWriter____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TextWriter____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__67_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__TextWriter____c, 0x10>, "Size mismatch!");

} // namespace end def System::IO
// Type: System.IO::TextWriter
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3586))
// CS Name: ::System.IO::TextWriter*
class CORDL_TYPE TextWriter : public ::System::MarshalByRefObject {
public:
// Declarations
using __c = ::System::IO::__TextWriter____c;

using SyncTextWriter = ::System::IO::__TextWriter__SyncTextWriter;

using NullTextWriter = ::System::IO::__TextWriter__NullTextWriter;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::MarshalByRefObject)]{};

/// @brief Field CoreNewLine offset 0x18
 __declspec(property(get=__get_CoreNewLine, put=__set_CoreNewLine)) ::ArrayW<char16_t,::Array<char16_t>*>  CoreNewLine;

/// @brief Field CoreNewLineStr offset 0x20
 __declspec(property(get=__get_CoreNewLineStr, put=__set_CoreNewLineStr)) ::StringW  CoreNewLineStr;

/// @brief Field _internalFormatProvider offset 0x28
 __declspec(property(get=__get__internalFormatProvider, put=__set__internalFormatProvider)) ::System::IFormatProvider*  _internalFormatProvider;

 __declspec(property(get=get_FormatProvider)) ::System::IFormatProvider*  FormatProvider;

 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

 __declspec(property(get=get_NewLine)) ::StringW  NewLine;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::IAsyncDisposable"
constexpr operator  ::System::IAsyncDisposable*() noexcept;

static inline void setStaticF_Null(::System::IO::TextWriter*  value) ;

static inline ::System::IO::TextWriter* getStaticF_Null() ;

static inline void setStaticF_s_coreNewLine(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_s_coreNewLine() ;

constexpr void __set_CoreNewLine(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get_CoreNewLine() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get_CoreNewLine() const;

constexpr void __set_CoreNewLineStr(::StringW  value) ;

constexpr ::StringW& __get_CoreNewLineStr() ;

constexpr ::StringW const& __get_CoreNewLineStr() const;

constexpr void __set__internalFormatProvider(::System::IFormatProvider*  value) ;

constexpr ::System::IFormatProvider* __get__internalFormatProvider() ;

constexpr ::cordl_internals::to_const_pointer<::System::IFormatProvider*> __get__internalFormatProvider() const;

static inline ::System::IO::TextWriter* New_ctor() ;

/// @brief Method .ctor addr 0x25043c4 size 0x7c virtual false final false
inline void _ctor() ;

static inline ::System::IO::TextWriter* New_ctor(::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor addr 0x2503c24 size 0x88 virtual false final false
inline void _ctor(::System::IFormatProvider*  formatProvider) ;

/// @brief Method get_FormatProvider addr 0x2507344 size 0x68 virtual true final false
inline ::System::IFormatProvider* get_FormatProvider() ;

/// @brief Method Close addr 0x25073ac size 0x6c virtual true final false
inline void Close() ;

/// @brief Method Dispose addr 0x2507418 size 0x4 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method Dispose addr 0x250741c size 0x6c virtual true final true
inline void Dispose() ;

/// @brief Method DisposeAsync addr 0x2504824 size 0xcc virtual true final false
inline ::System::Threading::Tasks::ValueTask DisposeAsync() ;

/// @brief Method Flush addr 0x2507488 size 0x4 virtual true final false
inline void Flush() ;

/// @brief Method get_Encoding addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Text::Encoding* get_Encoding() ;

/// @brief Method get_NewLine addr 0x250748c size 0x8 virtual true final false
inline ::StringW get_NewLine() ;

/// @brief Method Write addr 0x2507494 size 0x4 virtual true final false
inline void Write(char16_t  value) ;

/// @brief Method Write addr 0x2507498 size 0x20 virtual true final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer) ;

/// @brief Method Write addr 0x25074b8 size 0x1b4 virtual true final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Write addr 0x250766c size 0x38 virtual true final false
inline void Write(::StringW  value) ;

/// @brief Method Write addr 0x25076a4 size 0x6c virtual true final false
inline void Write(::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method WriteLine addr 0x2507710 size 0x14 virtual true final false
inline void WriteLine() ;

/// @brief Method WriteLine addr 0x2507724 size 0x30 virtual true final false
inline void WriteLine(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteLine addr 0x2507754 size 0x3c virtual true final false
inline void WriteLine(::StringW  value) ;

/// @brief Method WriteLine addr 0x2507790 size 0x6c virtual true final false
inline void WriteLine(::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method FlushAsync addr 0x2505a68 size 0x1f4 virtual true final false
inline ::System::Threading::Tasks::Task* FlushAsync() ;

/// @brief Method Synchronized addr 0x25077fc size 0xc0 virtual false final false
static inline ::System::IO::TextWriter* Synchronized(::System::IO::TextWriter*  writer) ;

// Ctor Parameters [CppParam { name: "", ty: "TextWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextWriter(TextWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextWriter(TextWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextWriter()  = default;
public:


// Fields

// Static field Null

// Static field s_coreNewLine


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::TextWriter, 0x30>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::TextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextWriter*, "System.IO", "TextWriter");
NEED_NO_BOX(::System::IO::__TextWriter____c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__TextWriter____c*, "System.IO", "TextWriter/<>c");
