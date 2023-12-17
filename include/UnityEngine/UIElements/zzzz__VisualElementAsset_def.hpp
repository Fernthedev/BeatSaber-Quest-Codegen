#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementAsset)
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct PickingMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementAsset);
// Type: UnityEngine.UIElements::VisualElementAsset
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7013))
// CS Name: ::UnityEngine.UIElements::VisualElementAsset*
class CORDL_TYPE VisualElementAsset : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field m_Name offset 0x10
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::StringW  m_Name;

/// @brief Field m_Id offset 0x18
 __declspec(property(get=__get_m_Id, put=__set_m_Id)) int32_t  m_Id;

/// @brief Field m_OrderInDocument offset 0x1c
 __declspec(property(get=__get_m_OrderInDocument, put=__set_m_OrderInDocument)) int32_t  m_OrderInDocument;

/// @brief Field m_ParentId offset 0x20
 __declspec(property(get=__get_m_ParentId, put=__set_m_ParentId)) int32_t  m_ParentId;

/// @brief Field m_RuleIndex offset 0x24
 __declspec(property(get=__get_m_RuleIndex, put=__set_m_RuleIndex)) int32_t  m_RuleIndex;

/// @brief Field m_Text offset 0x28
 __declspec(property(get=__get_m_Text, put=__set_m_Text)) ::StringW  m_Text;

/// @brief Field m_PickingMode offset 0x30
 __declspec(property(get=__get_m_PickingMode, put=__set_m_PickingMode)) ::UnityEngine::UIElements::PickingMode  m_PickingMode;

/// @brief Field m_FullTypeName offset 0x38
 __declspec(property(get=__get_m_FullTypeName, put=__set_m_FullTypeName)) ::StringW  m_FullTypeName;

/// @brief Field m_Classes offset 0x40
 __declspec(property(get=__get_m_Classes, put=__set_m_Classes)) ::ArrayW<::StringW,::Array<::StringW>*>  m_Classes;

/// @brief Field m_StylesheetPaths offset 0x48
 __declspec(property(get=__get_m_StylesheetPaths, put=__set_m_StylesheetPaths)) ::System::Collections::Generic::List_1<::StringW>*  m_StylesheetPaths;

/// @brief Field m_Stylesheets offset 0x50
 __declspec(property(get=__get_m_Stylesheets, put=__set_m_Stylesheets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*  m_Stylesheets;

/// @brief Field m_Properties offset 0x58
 __declspec(property(get=__get_m_Properties, put=__set_m_Properties)) ::System::Collections::Generic::List_1<::StringW>*  m_Properties;

 __declspec(property(get=get_id)) int32_t  id;

 __declspec(property(get=get_orderInDocument)) int32_t  orderInDocument;

 __declspec(property(get=get_parentId)) int32_t  parentId;

 __declspec(property(get=get_ruleIndex)) int32_t  ruleIndex;

 __declspec(property(get=get_fullTypeName)) ::StringW  fullTypeName;

 __declspec(property(get=get_classes)) ::ArrayW<::StringW,::Array<::StringW>*>  classes;

 __declspec(property(get=get_stylesheetPaths)) ::System::Collections::Generic::List_1<::StringW>*  stylesheetPaths;

 __declspec(property(get=get_hasStylesheetPaths)) bool  hasStylesheetPaths;

 __declspec(property(get=get_stylesheets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*  stylesheets;

 __declspec(property(get=get_hasStylesheets)) bool  hasStylesheets;

/// @brief Convert operator to "::UnityEngine::UIElements::IUxmlAttributes"
constexpr operator  ::UnityEngine::UIElements::IUxmlAttributes*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

constexpr void __set_m_Name(::StringW  value) ;

constexpr ::StringW& __get_m_Name() ;

constexpr ::StringW const& __get_m_Name() const;

constexpr void __set_m_Id(int32_t  value) ;

constexpr int32_t& __get_m_Id() ;

constexpr int32_t const& __get_m_Id() const;

constexpr void __set_m_OrderInDocument(int32_t  value) ;

constexpr int32_t& __get_m_OrderInDocument() ;

constexpr int32_t const& __get_m_OrderInDocument() const;

constexpr void __set_m_ParentId(int32_t  value) ;

constexpr int32_t& __get_m_ParentId() ;

constexpr int32_t const& __get_m_ParentId() const;

constexpr void __set_m_RuleIndex(int32_t  value) ;

constexpr int32_t& __get_m_RuleIndex() ;

constexpr int32_t const& __get_m_RuleIndex() const;

constexpr void __set_m_Text(::StringW  value) ;

constexpr ::StringW& __get_m_Text() ;

constexpr ::StringW const& __get_m_Text() const;

constexpr void __set_m_PickingMode(::UnityEngine::UIElements::PickingMode  value) ;

constexpr ::UnityEngine::UIElements::PickingMode& __get_m_PickingMode() ;

constexpr ::UnityEngine::UIElements::PickingMode const& __get_m_PickingMode() const;

constexpr void __set_m_FullTypeName(::StringW  value) ;

constexpr ::StringW& __get_m_FullTypeName() ;

constexpr ::StringW const& __get_m_FullTypeName() const;

constexpr void __set_m_Classes(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_m_Classes() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_m_Classes() const;

constexpr void __set_m_StylesheetPaths(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_m_StylesheetPaths() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_m_StylesheetPaths() const;

constexpr void __set_m_Stylesheets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* __get_m_Stylesheets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*> __get_m_Stylesheets() const;

constexpr void __set_m_Properties(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_m_Properties() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_m_Properties() const;

/// @brief Method get_id addr 0x2e122c0 size 0x8 virtual false final false
inline int32_t get_id() ;

/// @brief Method get_orderInDocument addr 0x2e131d0 size 0x8 virtual false final false
inline int32_t get_orderInDocument() ;

/// @brief Method get_parentId addr 0x2e12094 size 0x8 virtual false final false
inline int32_t get_parentId() ;

/// @brief Method get_ruleIndex addr 0x2e1318c size 0x8 virtual false final false
inline int32_t get_ruleIndex() ;

/// @brief Method get_fullTypeName addr 0x2e13454 size 0x8 virtual false final false
inline ::StringW get_fullTypeName() ;

/// @brief Method get_classes addr 0x2e13658 size 0x8 virtual false final false
inline ::ArrayW<::StringW,::Array<::StringW>*> get_classes() ;

/// @brief Method get_stylesheetPaths addr 0x2e13670 size 0x80 virtual false final false
inline ::System::Collections::Generic::List_1<::StringW>* get_stylesheetPaths() ;

/// @brief Method get_hasStylesheetPaths addr 0x2e13660 size 0x10 virtual false final false
inline bool get_hasStylesheetPaths() ;

/// @brief Method get_stylesheets addr 0x2e13700 size 0x80 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* get_stylesheets() ;

/// @brief Method get_hasStylesheets addr 0x2e136f0 size 0x10 virtual false final false
inline bool get_hasStylesheets() ;

/// @brief Method OnBeforeSerialize addr 0x2e14ad4 size 0x4 virtual true final true
inline void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x2e14ad8 size 0x188 virtual true final true
inline void OnAfterDeserialize() ;

/// @brief Method AddProperty addr 0x2e14c60 size 0x4 virtual false final false
inline void AddProperty(::StringW  propertyName, ::StringW  propertyValue) ;

/// @brief Method SetOrAddProperty addr 0x2e14c64 size 0x210 virtual false final false
inline void SetOrAddProperty(::StringW  propertyName, ::StringW  propertyValue) ;

/// @brief Method TryGetAttributeValue addr 0x2e14e74 size 0xd0 virtual true final true
inline bool TryGetAttributeValue(::StringW  propertyName, ByRef<::StringW>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualElementAsset(VisualElementAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualElementAsset(VisualElementAsset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VisualElementAsset()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementAsset, 0x60>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementAsset*, "UnityEngine.UIElements", "VisualElementAsset");
