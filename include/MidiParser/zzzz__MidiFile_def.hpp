#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MidiFile)
namespace MidiParser {
class __MidiFile__Reader;
}
namespace MidiParser {
class MidiTrack;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace MidiParser {
class MidiFile;
}
namespace MidiParser {
class __MidiFile__Reader;
}
// Write type traits
MARK_REF_PTR_T(::MidiParser::MidiFile);
MARK_REF_PTR_T(::MidiParser::__MidiFile__Reader);
// Type: ::Reader
namespace MidiParser {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16227))
// CS Name: ::MidiFile::Reader*
class CORDL_TYPE __MidiFile__Reader : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Read16 addr 0x23e5f44 size 0x54 virtual false final false
static inline int32_t Read16(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ByRef<int32_t>  i) ;

/// @brief Method Read32 addr 0x23e5eb4 size 0x90 virtual false final false
static inline int32_t Read32(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ByRef<int32_t>  i) ;

/// @brief Method Read8 addr 0x23e64c0 size 0x38 virtual false final false
static inline uint8_t Read8(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ByRef<int32_t>  i) ;

/// @brief Method ReadAllBytesFromStream addr 0x23e64f8 size 0x228 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadAllBytesFromStream(::System::IO::Stream*  input) ;

/// @brief Method ReadString addr 0x23e5e5c size 0x58 virtual false final false
static inline ::StringW ReadString(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ByRef<int32_t>  i, int32_t  length) ;

/// @brief Method ReadVarInt addr 0x23e63c0 size 0x84 virtual false final false
static inline int32_t ReadVarInt(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ByRef<int32_t>  i) ;

// Ctor Parameters [CppParam { name: "", ty: "__MidiFile__Reader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MidiFile__Reader(__MidiFile__Reader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MidiFile__Reader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MidiFile__Reader(__MidiFile__Reader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MidiFile__Reader()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MidiParser::__MidiFile__Reader, 0x10>, "Size mismatch!");

} // namespace end def MidiParser
// Type: MidiParser::MidiFile
namespace MidiParser {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16228))
// CS Name: ::MidiParser::MidiFile*
class CORDL_TYPE MidiFile : public ::System::Object {
public:
// Declarations
using Reader = ::MidiParser::__MidiFile__Reader;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field format offset 0x10
 __declspec(property(get=__get_format, put=__set_format)) int32_t  format;

/// @brief Field ticksPerQuarterNote offset 0x14
 __declspec(property(get=__get_ticksPerQuarterNote, put=__set_ticksPerQuarterNote)) int32_t  ticksPerQuarterNote;

/// @brief Field tracks offset 0x18
 __declspec(property(get=__get_tracks, put=__set_tracks)) ::ArrayW<::MidiParser::MidiTrack*,::Array<::MidiParser::MidiTrack*>*>  tracks;

/// @brief Field tracksCount offset 0x20
 __declspec(property(get=__get_tracksCount, put=__set_tracksCount)) int32_t  tracksCount;

constexpr void __set_format(int32_t  value) ;

constexpr int32_t& __get_format() ;

constexpr int32_t const& __get_format() const;

constexpr void __set_ticksPerQuarterNote(int32_t  value) ;

constexpr int32_t& __get_ticksPerQuarterNote() ;

constexpr int32_t const& __get_ticksPerQuarterNote() const;

constexpr void __set_tracks(::ArrayW<::MidiParser::MidiTrack*,::Array<::MidiParser::MidiTrack*>*>  value) ;

constexpr ::ArrayW<::MidiParser::MidiTrack*,::Array<::MidiParser::MidiTrack*>*>& __get_tracks() ;

constexpr ::ArrayW<::MidiParser::MidiTrack*,::Array<::MidiParser::MidiTrack*>*> const& __get_tracks() const;

constexpr void __set_tracksCount(int32_t  value) ;

constexpr int32_t& __get_tracksCount() ;

constexpr int32_t const& __get_tracksCount() const;

static inline ::MidiParser::MidiFile* New_ctor(::StringW  path) ;

/// @brief Method .ctor addr 0x23e5b44 size 0x24 virtual false final false
inline void _ctor(::StringW  path) ;

static inline ::MidiParser::MidiFile* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0x23e5b68 size 0x2f4 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method ParseMetaEvent addr 0x23e62dc size 0xe4 virtual false final false
static inline bool ParseMetaEvent(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ByRef<int32_t>  position, uint8_t  metaEventType, ByRef<int32_t>  data1, ByRef<int32_t>  data2) ;

/// @brief Method ParseTrack addr 0x23e5f98 size 0x344 virtual false final false
static inline ::MidiParser::MidiTrack* ParseTrack(int32_t  index, ::ArrayW<uint8_t,::Array<uint8_t>*>  data, ByRef<int32_t>  position) ;

// Ctor Parameters [CppParam { name: "", ty: "MidiFile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiFile(MidiFile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiFile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiFile(MidiFile const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MidiFile()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MidiParser::MidiFile, 0x28>, "Size mismatch!");

} // namespace end def MidiParser
NEED_NO_BOX(::MidiParser::MidiFile);
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MidiFile*, "MidiParser", "MidiFile");
NEED_NO_BOX(::MidiParser::__MidiFile__Reader);
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::__MidiFile__Reader*, "MidiParser", "MidiFile/Reader");
