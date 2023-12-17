#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventData_def.hpp"
CORDL_MODULE_EXPORT(LightRotationBeatmapEventDataProcessor)
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationBeatmapEventDataProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationBeatmapEventDataProcessor);
// Type: ::LightRotationBeatmapEventDataProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14741)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14741), inst: 952 }), TypeDefinitionIndex(TypeDefinitionIndex(14735))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14746))
// CS Name: ::LightRotationBeatmapEventDataProcessor*
class CORDL_TYPE LightRotationBeatmapEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::LightRotationBeatmapEventData*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::LightRotationBeatmapEventData*>)]{};

/// @brief Method ProcessInsertedEventDataInternal addr 0xdffc14 size 0x110 virtual true final false
inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  insertedNode) ;

/// @brief Method ProcessBeforeDeleteEventDataInternal addr 0xdffd24 size 0xfc virtual true final false
inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  nodeToDelete) ;

static inline ::GlobalNamespace::LightRotationBeatmapEventDataProcessor* New_ctor() ;

/// @brief Method .ctor addr 0xdffe20 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightRotationBeatmapEventDataProcessor(LightRotationBeatmapEventDataProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightRotationBeatmapEventDataProcessor(LightRotationBeatmapEventDataProcessor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightRotationBeatmapEventDataProcessor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationBeatmapEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventDataProcessor*, "", "LightRotationBeatmapEventDataProcessor");
