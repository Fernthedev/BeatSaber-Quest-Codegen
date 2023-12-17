#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
CORDL_MODULE_EXPORT(BasicBeatmapEventDataProcessor)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicBeatmapEventDataProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicBeatmapEventDataProcessor);
// Type: ::BasicBeatmapEventDataProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14741), inst: 949 }), TypeDefinitionIndex(TypeDefinitionIndex(14721)), TypeDefinitionIndex(TypeDefinitionIndex(14741))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14740))
// CS Name: ::BasicBeatmapEventDataProcessor*
class CORDL_TYPE BasicBeatmapEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::BasicBeatmapEventData*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::BasicBeatmapEventData*>)]{};

/// @brief Method ProcessInsertedEventDataInternal addr 0xdff488 size 0x1e8 virtual true final false
inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  insertedNode) ;

/// @brief Method ProcessBeforeDeleteEventDataInternal addr 0xdff670 size 0x234 virtual true final false
inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  nodeToDelete) ;

static inline ::GlobalNamespace::BasicBeatmapEventDataProcessor* New_ctor() ;

/// @brief Method .ctor addr 0xdff8a4 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicBeatmapEventDataProcessor(BasicBeatmapEventDataProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicBeatmapEventDataProcessor(BasicBeatmapEventDataProcessor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BasicBeatmapEventDataProcessor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicBeatmapEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapEventDataProcessor*, "", "BasicBeatmapEventDataProcessor");
