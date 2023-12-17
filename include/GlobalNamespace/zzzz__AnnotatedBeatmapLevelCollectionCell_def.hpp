#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnnotatedBeatmapLevelCollectionCell)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace HMUI {
class ImageView;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
struct __AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionCell;
}
namespace GlobalNamespace {
struct __AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell);
MARK_VAL_T(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22);
// Type: ::<RefreshAvailabilityAsync>d__22
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5414))
// CS Name: ::AnnotatedBeatmapLevelCollectionCell::<RefreshAvailabilityAsync>d__22
struct CORDL_TYPE __AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*  __4__this;

/// @brief Field contentModel offset 0x30
 __declspec(property(get=__get_contentModel, put=__set_contentModel)) ::GlobalNamespace::IAdditionalContentModel*  contentModel;

/// @brief Field <cancellationToken>5__2 offset 0x38
 __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2)) ::System::Threading::CancellationToken  _cancellationToken_5__2;

/// @brief Field <numberOfOwnedLevels>5__3 offset 0x40
 __declspec(property(get=__get__numberOfOwnedLevels_5__3, put=__set__numberOfOwnedLevels_5__3)) int32_t  _numberOfOwnedLevels_5__3;

/// @brief Field <error>5__4 offset 0x44
 __declspec(property(get=__get__error_5__4, put=__set__error_5__4)) bool  _error_5__4;

/// @brief Field <>7__wrap4 offset 0x48
 __declspec(property(get=__get___7__wrap4, put=__set___7__wrap4)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  __7__wrap4;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*  value) ;

constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*> __get___4__this() const;

constexpr void __set_contentModel(::GlobalNamespace::IAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::IAdditionalContentModel* __get_contentModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> __get_contentModel() const;

constexpr void __set__cancellationToken_5__2(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get__cancellationToken_5__2() ;

constexpr ::System::Threading::CancellationToken const& __get__cancellationToken_5__2() const;

constexpr void __set__numberOfOwnedLevels_5__3(int32_t  value) ;

constexpr int32_t& __get__numberOfOwnedLevels_5__3() ;

constexpr int32_t const& __get__numberOfOwnedLevels_5__3() const;

constexpr void __set__error_5__4(bool  value) ;

constexpr bool& __get__error_5__4() ;

constexpr bool const& __get__error_5__4() const;

constexpr void __set___7__wrap4(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>* __get___7__wrap4() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> __get___7__wrap4() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2277a50 size 0xd6c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22787bc size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*", modifiers: "", def_value: None }, CppParam { name: "contentModel", ty: "::GlobalNamespace::IAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_numberOfOwnedLevels_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_error_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
constexpr __AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*  __4__this, ::GlobalNamespace::IAdditionalContentModel*  contentModel, ::System::Threading::CancellationToken  _cancellationToken_5__2, int32_t  _numberOfOwnedLevels_5__3, bool  _error_5__4, ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  __7__wrap4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AnnotatedBeatmapLevelCollectionCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13653))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5415))
// CS Name: ::AnnotatedBeatmapLevelCollectionCell*
class CORDL_TYPE AnnotatedBeatmapLevelCollectionCell : public ::HMUI::SelectableCell {
public:
// Declarations
using _RefreshAvailabilityAsync_d__22 = ::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd0 - sizeof(::HMUI::SelectableCell)]{};

/// @brief Field _infoText offset 0x48
 __declspec(property(get=__get__infoText, put=__set__infoText)) ::TMPro::TextMeshProUGUI*  _infoText;

/// @brief Field _coverImage offset 0x50
 __declspec(property(get=__get__coverImage, put=__set__coverImage)) ::HMUI::ImageView*  _coverImage;

/// @brief Field _selectionImage offset 0x58
 __declspec(property(get=__get__selectionImage, put=__set__selectionImage)) ::HMUI::ImageView*  _selectionImage;

/// @brief Field _downloadIconObject offset 0x60
 __declspec(property(get=__get__downloadIconObject, put=__set__downloadIconObject)) ::UnityEngine::GameObject*  _downloadIconObject;

/// @brief Field _newBadgeObject offset 0x68
 __declspec(property(get=__get__newBadgeObject, put=__set__newBadgeObject)) ::UnityEngine::GameObject*  _newBadgeObject;

/// @brief Field _updatedBadgeObject offset 0x70
 __declspec(property(get=__get__updatedBadgeObject, put=__set__updatedBadgeObject)) ::UnityEngine::GameObject*  _updatedBadgeObject;

/// @brief Field _selectedColor0 offset 0x78
 __declspec(property(get=__get__selectedColor0, put=__set__selectedColor0)) ::UnityEngine::Color  _selectedColor0;

/// @brief Field _selectedColor1 offset 0x88
 __declspec(property(get=__get__selectedColor1, put=__set__selectedColor1)) ::UnityEngine::Color  _selectedColor1;

/// @brief Field _highlightedColor0 offset 0x98
 __declspec(property(get=__get__highlightedColor0, put=__set__highlightedColor0)) ::UnityEngine::Color  _highlightedColor0;

/// @brief Field _highlightedColor1 offset 0xa8
 __declspec(property(get=__get__highlightedColor1, put=__set__highlightedColor1)) ::UnityEngine::Color  _highlightedColor1;

/// @brief Field <cellIndex>k__BackingField offset 0xb8
 __declspec(property(get=__get__cellIndex_k__BackingField, put=__set__cellIndex_k__BackingField)) int32_t  _cellIndex_k__BackingField;

/// @brief Field _annotatedBeatmapLevelCollection offset 0xc0
 __declspec(property(get=__get__annotatedBeatmapLevelCollection, put=__set__annotatedBeatmapLevelCollection)) ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*  _annotatedBeatmapLevelCollection;

/// @brief Field _cancellationTokenSource offset 0xc8
 __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

 __declspec(property(get=get_cellIndex, put=set_cellIndex)) int32_t  cellIndex;

constexpr void __set__infoText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__infoText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__infoText() const;

constexpr void __set__coverImage(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__coverImage() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__coverImage() const;

constexpr void __set__selectionImage(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__selectionImage() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__selectionImage() const;

constexpr void __set__downloadIconObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__downloadIconObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__downloadIconObject() const;

constexpr void __set__newBadgeObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__newBadgeObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__newBadgeObject() const;

constexpr void __set__updatedBadgeObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__updatedBadgeObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__updatedBadgeObject() const;

constexpr void __set__selectedColor0(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__selectedColor0() ;

constexpr ::UnityEngine::Color const& __get__selectedColor0() const;

constexpr void __set__selectedColor1(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__selectedColor1() ;

constexpr ::UnityEngine::Color const& __get__selectedColor1() const;

constexpr void __set__highlightedColor0(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__highlightedColor0() ;

constexpr ::UnityEngine::Color const& __get__highlightedColor0() const;

constexpr void __set__highlightedColor1(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__highlightedColor1() ;

constexpr ::UnityEngine::Color const& __get__highlightedColor1() const;

constexpr void __set__cellIndex_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__cellIndex_k__BackingField() ;

constexpr int32_t const& __get__cellIndex_k__BackingField() const;

constexpr void __set__annotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*  value) ;

constexpr ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* __get__annotatedBeatmapLevelCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*> __get__annotatedBeatmapLevelCollection() const;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__cancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__cancellationTokenSource() const;

/// @brief Method get_cellIndex addr 0x227742c size 0x8 virtual false final false
inline int32_t get_cellIndex() ;

/// @brief Method set_cellIndex addr 0x2277434 size 0x8 virtual false final false
inline void set_cellIndex(int32_t  value) ;

/// @brief Method SetData addr 0x227743c size 0x2e8 virtual false final false
inline void SetData(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*  annotatedBeatmapLevelCollection, bool  isPromoted, bool  isUpdated) ;

/// @brief Method InternalToggle addr 0x2277858 size 0x24 virtual true final false
inline void InternalToggle() ;

/// @brief Method SelectionDidChange addr 0x227787c size 0x4 virtual true final false
inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method HighlightDidChange addr 0x227796c size 0x4 virtual true final false
inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method RefreshVisuals addr 0x2277880 size 0xec virtual false final false
inline void RefreshVisuals() ;

/// @brief Method GetInfoText addr 0x2277724 size 0xf0 virtual false final false
inline ::StringW GetInfoText(::StringW  name, int32_t  songs, int32_t  purchased) ;

/// @brief Method RefreshAvailabilityAsync addr 0x2277970 size 0xa4 virtual false final false
inline void RefreshAvailabilityAsync(::GlobalNamespace::IAdditionalContentModel*  contentModel) ;

/// @brief Method SetDownloadIconVisible addr 0x2277814 size 0x44 virtual false final false
inline void SetDownloadIconVisible(bool  visible) ;

/// @brief Method CancelAsyncOperations addr 0x2277a14 size 0x14 virtual false final false
inline void CancelAsyncOperations() ;

static inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell* New_ctor() ;

/// @brief Method .ctor addr 0x2277a28 size 0x28 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnnotatedBeatmapLevelCollectionCell(AnnotatedBeatmapLevelCollectionCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnnotatedBeatmapLevelCollectionCell(AnnotatedBeatmapLevelCollectionCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AnnotatedBeatmapLevelCollectionCell()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, 0xd0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*, "", "AnnotatedBeatmapLevelCollectionCell");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22, "", "AnnotatedBeatmapLevelCollectionCell/<RefreshAvailabilityAsync>d__22");
