#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolConfigViewController)
namespace HMUI {
class TextPageScrollView;
}
namespace GlobalNamespace {
class RecordingToolManager;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolConfigViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolConfigViewController);
// Type: ::RecordingToolConfigViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5738))
// CS Name: ::RecordingToolConfigViewController*
class CORDL_TYPE RecordingToolConfigViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _textPageScrollView offset 0x70
 __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView)) ::HMUI::TextPageScrollView*  _textPageScrollView;

/// @brief Field _recordingToolManager offset 0x78
 __declspec(property(get=__get__recordingToolManager, put=__set__recordingToolManager)) ::GlobalNamespace::RecordingToolManager*  _recordingToolManager;

constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView*  value) ;

constexpr ::HMUI::TextPageScrollView* __get__textPageScrollView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> __get__textPageScrollView() const;

constexpr void __set__recordingToolManager(::GlobalNamespace::RecordingToolManager*  value) ;

constexpr ::GlobalNamespace::RecordingToolManager* __get__recordingToolManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolManager*> __get__recordingToolManager() const;

/// @brief Method DidActivate addr 0x22d5e98 size 0x8c virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::RecordingToolConfigViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d5f24 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolConfigViewController(RecordingToolConfigViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolConfigViewController(RecordingToolConfigViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingToolConfigViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolConfigViewController, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolConfigViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolConfigViewController*, "", "RecordingToolConfigViewController");
