#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AutoSetupData)
// Forward declare root types
namespace GlobalNamespace {
class AutoSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AutoSetupData);
// Type: ::AutoSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5557))
// CS Name: ::AutoSetupData*
class CORDL_TYPE AutoSetupData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field selectBasedOnSuggestions offset 0x10
 __declspec(property(get=__get_selectBasedOnSuggestions, put=__set_selectBasedOnSuggestions)) bool  selectBasedOnSuggestions;

/// @brief Field autoStartWhenAllReady offset 0x11
 __declspec(property(get=__get_autoStartWhenAllReady, put=__set_autoStartWhenAllReady)) bool  autoStartWhenAllReady;

/// @brief Field forceAutoStartAfterSongSelection offset 0x12
 __declspec(property(get=__get_forceAutoStartAfterSongSelection, put=__set_forceAutoStartAfterSongSelection)) bool  forceAutoStartAfterSongSelection;

/// @brief Field randomSongIfNoneSuggested offset 0x13
 __declspec(property(get=__get_randomSongIfNoneSuggested, put=__set_randomSongIfNoneSuggested)) bool  randomSongIfNoneSuggested;

constexpr void __set_selectBasedOnSuggestions(bool  value) ;

constexpr bool& __get_selectBasedOnSuggestions() ;

constexpr bool const& __get_selectBasedOnSuggestions() const;

constexpr void __set_autoStartWhenAllReady(bool  value) ;

constexpr bool& __get_autoStartWhenAllReady() ;

constexpr bool const& __get_autoStartWhenAllReady() const;

constexpr void __set_forceAutoStartAfterSongSelection(bool  value) ;

constexpr bool& __get_forceAutoStartAfterSongSelection() ;

constexpr bool const& __get_forceAutoStartAfterSongSelection() const;

constexpr void __set_randomSongIfNoneSuggested(bool  value) ;

constexpr bool& __get_randomSongIfNoneSuggested() ;

constexpr bool const& __get_randomSongIfNoneSuggested() const;

static inline ::GlobalNamespace::AutoSetupData* New_ctor() ;

/// @brief Method .ctor addr 0x22a2eac size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AutoSetupData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoSetupData(AutoSetupData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoSetupData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoSetupData(AutoSetupData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AutoSetupData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutoSetupData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutoSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoSetupData*, "", "AutoSetupData");
