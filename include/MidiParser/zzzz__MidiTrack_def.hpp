#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MidiTrack)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace MidiParser {
struct MidiEvent;
}
// Forward declare root types
namespace MidiParser {
class MidiTrack;
}
// Write type traits
MARK_REF_PTR_T(::MidiParser::MidiTrack);
// Type: MidiParser::MidiTrack
namespace MidiParser {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16229))
// CS Name: ::MidiParser::MidiTrack*
class CORDL_TYPE MidiTrack : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field Index offset 0x10
 __declspec(property(get=__get_Index, put=__set_Index)) int32_t  Index;

/// @brief Field MidiEvents offset 0x18
 __declspec(property(get=__get_MidiEvents, put=__set_MidiEvents)) ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>*  MidiEvents;

constexpr void __set_Index(int32_t  value) ;

constexpr int32_t& __get_Index() ;

constexpr int32_t const& __get_Index() const;

constexpr void __set_MidiEvents(::System::Collections::Generic::List_1<::MidiParser::MidiEvent>*  value) ;

constexpr ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* __get_MidiEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::MidiParser::MidiEvent>*> __get_MidiEvents() const;

static inline ::MidiParser::MidiTrack* New_ctor() ;

/// @brief Method .ctor addr 0x23e6444 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MidiTrack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiTrack(MidiTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiTrack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiTrack(MidiTrack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MidiTrack()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MidiParser::MidiTrack, 0x20>, "Size mismatch!");

} // namespace end def MidiParser
NEED_NO_BOX(::MidiParser::MidiTrack);
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MidiTrack*, "MidiParser", "MidiTrack");
