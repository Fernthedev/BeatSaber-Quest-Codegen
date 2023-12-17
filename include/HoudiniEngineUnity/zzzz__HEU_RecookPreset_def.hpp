#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_RecookPreset)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_InputPreset;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_RecookPreset;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_RecookPreset);
// Type: HoudiniEngineUnity::HEU_RecookPreset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9613))
// CS Name: ::HoudiniEngineUnity::HEU_RecookPreset*
class CORDL_TYPE HEU_RecookPreset : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _volumeCachePresets offset 0x10
 __declspec(property(get=__get__volumeCachePresets, put=__set__volumeCachePresets)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*  _volumeCachePresets;

/// @brief Field _inputPresets offset 0x18
 __declspec(property(get=__get__inputPresets, put=__set__inputPresets)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*  _inputPresets;

constexpr void __set__volumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* __get__volumeCachePresets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*> __get__volumeCachePresets() const;

constexpr void __set__inputPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* __get__inputPresets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*> __get__inputPresets() const;

static inline ::HoudiniEngineUnity::HEU_RecookPreset* New_ctor() ;

/// @brief Method .ctor addr 0x214e8ec size 0xc0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_RecookPreset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_RecookPreset(HEU_RecookPreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_RecookPreset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_RecookPreset(HEU_RecookPreset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_RecookPreset()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_RecookPreset, 0x20>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_RecookPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_RecookPreset*, "HoudiniEngineUnity", "HEU_RecookPreset");
