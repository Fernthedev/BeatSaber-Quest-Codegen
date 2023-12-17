#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Path)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::IO {
class __Path____c;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
struct ValueTuple_8;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace System {
template<typename T1>
struct ValueTuple_1;
}
// Forward declare root types
namespace System::IO {
class Path;
}
namespace System::IO {
class __Path____c;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Path);
MARK_REF_PTR_T(::System::IO::__Path____c);
// Type: ::<>c
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3633))
// CS Name: ::Path::<>c*
class CORDL_TYPE __Path____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::IO::__Path____c*  value) ;

static inline ::System::IO::__Path____c* getStaticF___9() ;

static inline void setStaticF___9__56_0(::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>>*  value) ;

static inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>>* getStaticF___9__56_0() ;

static inline void setStaticF___9__57_0(::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,::System::ValueTuple_1<bool>>>*  value) ;

static inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,::System::ValueTuple_1<bool>>>* getStaticF___9__57_0() ;

static inline ::System::IO::__Path____c* New_ctor() ;

/// @brief Method .ctor addr 0x254444c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <JoinInternal>b__56_0 addr 0x2544454 size 0x1a0 virtual false final false
inline void _JoinInternal_b__56_0(::System::Span_1<char16_t>  destination, ::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>  state) ;

/// @brief Method <JoinInternal>b__57_0 addr 0x25445f4 size 0x264 virtual false final false
inline void _JoinInternal_b__57_0(::System::Span_1<char16_t>  destination, ::System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,::System::ValueTuple_1<bool>>  state) ;

// Ctor Parameters [CppParam { name: "", ty: "__Path____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Path____c(__Path____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Path____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Path____c(__Path____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Path____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__56_0

// Static field <>9__57_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Path____c, 0x10>, "Size mismatch!");

} // namespace end def System::IO
// Type: System.IO::Path
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3634))
// CS Name: ::System.IO::Path*
class CORDL_TYPE Path : public ::System::Object {
public:
// Declarations
using __c = ::System::IO::__Path____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_InvalidPathChars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_InvalidPathChars() ;

static inline void setStaticF_AltDirectorySeparatorChar(char16_t  value) ;

static inline char16_t getStaticF_AltDirectorySeparatorChar() ;

static inline void setStaticF_DirectorySeparatorChar(char16_t  value) ;

static inline char16_t getStaticF_DirectorySeparatorChar() ;

static inline void setStaticF_PathSeparator(char16_t  value) ;

static inline char16_t getStaticF_PathSeparator() ;

static inline void setStaticF_DirectorySeparatorStr(::StringW  value) ;

static inline ::StringW getStaticF_DirectorySeparatorStr() ;

static inline void setStaticF_VolumeSeparatorChar(char16_t  value) ;

static inline char16_t getStaticF_VolumeSeparatorChar() ;

static inline void setStaticF_PathSeparatorChars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_PathSeparatorChars() ;

static inline void setStaticF_dirEqualsVolume(bool  value) ;

static inline bool getStaticF_dirEqualsVolume() ;

static inline void setStaticF_trimEndCharsWindows(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_trimEndCharsWindows() ;

static inline void setStaticF_trimEndCharsUnix(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_trimEndCharsUnix() ;

/// @brief Method ChangeExtension addr 0x2541938 size 0x1fc virtual false final false
static inline ::StringW ChangeExtension(::StringW  path, ::StringW  extension) ;

/// @brief Method Combine addr 0x2541bc8 size 0x26c virtual false final false
static inline ::StringW Combine(::StringW  path1, ::StringW  path2) ;

/// @brief Method CleanPath addr 0x2541f5c size 0x440 virtual false final false
static inline ::StringW CleanPath(::StringW  s) ;

/// @brief Method GetDirectoryName addr 0x253d778 size 0x360 virtual false final false
static inline ::StringW GetDirectoryName(::StringW  path) ;

/// @brief Method GetDirectoryName addr 0x25427cc size 0xd0 virtual false final false
static inline ::System::ReadOnlySpan_1<char16_t> GetDirectoryName(::System::ReadOnlySpan_1<char16_t>  path) ;

/// @brief Method GetExtension addr 0x254289c size 0x12c virtual false final false
static inline ::StringW GetExtension(::StringW  path) ;

/// @brief Method GetFileName addr 0x253896c size 0x110 virtual false final false
static inline ::StringW GetFileName(::StringW  path) ;

/// @brief Method GetFileNameWithoutExtension addr 0x25429c8 size 0x5c virtual false final false
static inline ::StringW GetFileNameWithoutExtension(::StringW  path) ;

/// @brief Method GetFullPath addr 0x253dad8 size 0x68 virtual false final false
static inline ::StringW GetFullPath(::StringW  path) ;

/// @brief Method GetFullPathInternal addr 0x2542a24 size 0x54 virtual false final false
static inline ::StringW GetFullPathInternal(::StringW  path) ;

/// @brief Method InsecureGetFullPath addr 0x253d07c size 0x654 virtual false final false
static inline ::StringW InsecureGetFullPath(::StringW  path) ;

/// @brief Method IsDirectorySeparator addr 0x25388e0 size 0x8c virtual false final false
static inline bool IsDirectorySeparator(char16_t  c) ;

/// @brief Method GetPathRoot addr 0x254239c size 0x430 virtual false final false
static inline ::StringW GetPathRoot(::StringW  path) ;

/// @brief Method GetTempPath addr 0x2542e98 size 0xe8 virtual false final false
static inline ::StringW GetTempPath() ;

/// @brief Method get_temp_path addr 0x2542f80 size 0x4 virtual false final false
static inline ::StringW get_temp_path() ;

/// @brief Method IsPathRooted addr 0x2542f84 size 0x104 virtual false final false
static inline bool IsPathRooted(::System::ReadOnlySpan_1<char16_t>  path) ;

/// @brief Method IsPathRooted addr 0x2541e34 size 0x128 virtual false final false
static inline bool IsPathRooted(::StringW  path) ;

/// @brief Method GetInvalidPathChars addr 0x2543088 size 0x94 virtual false final false
static inline ::ArrayW<char16_t,::Array<char16_t>*> GetInvalidPathChars() ;

/// @brief Method GetRandomFileName addr 0x254311c size 0x164 virtual false final false
static inline ::StringW GetRandomFileName() ;

/// @brief Method findExtension addr 0x2541b34 size 0x94 virtual false final false
static inline int32_t findExtension(::StringW  path) ;

/// @brief Method CanonicalizePath addr 0x2542a78 size 0x420 virtual false final false
static inline ::StringW CanonicalizePath(::StringW  path) ;

/// @brief Method Combine addr 0x2543428 size 0x2ec virtual false final false
static inline ::StringW Combine(::ArrayW<::StringW,::Array<::StringW>*>  paths) ;

/// @brief Method Combine addr 0x2543714 size 0x1a8 virtual false final false
static inline ::StringW Combine(::StringW  path1, ::StringW  path2, ::StringW  path3) ;

/// @brief Method GetFileName addr 0x25438bc size 0x14c virtual false final false
static inline ::System::ReadOnlySpan_1<char16_t> GetFileName(::System::ReadOnlySpan_1<char16_t>  path) ;

/// @brief Method Join addr 0x2543a08 size 0xb8 virtual false final false
static inline ::StringW Join(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2) ;

/// @brief Method Join addr 0x2543d3c size 0x110 virtual false final false
static inline ::StringW Join(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2, ::System::ReadOnlySpan_1<char16_t>  path3) ;

/// @brief Method TryJoin addr 0x25441b4 size 0x234 virtual false final false
static inline bool TryJoin(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2, ::System::Span_1<char16_t>  destination, ByRef<int32_t>  charsWritten) ;

/// @brief Method JoinInternal addr 0x2543ac0 size 0x27c virtual false final false
static inline ::StringW JoinInternal(::System::ReadOnlySpan_1<char16_t>  first, ::System::ReadOnlySpan_1<char16_t>  second) ;

/// @brief Method JoinInternal addr 0x2543e4c size 0x368 virtual false final false
static inline ::StringW JoinInternal(::System::ReadOnlySpan_1<char16_t>  first, ::System::ReadOnlySpan_1<char16_t>  second, ::System::ReadOnlySpan_1<char16_t>  third) ;

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Path(Path && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Path(Path const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Path()  = default;
public:


// Fields

// Static field InvalidPathChars

// Static field AltDirectorySeparatorChar

// Static field DirectorySeparatorChar

// Static field PathSeparator

// Static field DirectorySeparatorStr

// Static field VolumeSeparatorChar

// Static field PathSeparatorChars

// Static field dirEqualsVolume

// Static field trimEndCharsWindows

// Static field trimEndCharsUnix


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Path, 0x10>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::Path);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Path*, "System.IO", "Path");
NEED_NO_BOX(::System::IO::__Path____c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Path____c*, "System.IO", "Path/<>c");
