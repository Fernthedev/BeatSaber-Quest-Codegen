#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultGroupManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class IGroupManager;
}
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DefaultGroupManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DefaultGroupManager);
// Type: UnityEngine.UIElements::DefaultGroupManager
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6861))
// CS Name: ::UnityEngine.UIElements::DefaultGroupManager*
class CORDL_TYPE DefaultGroupManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_GroupOptions offset 0x10
 __declspec(property(get=__get_m_GroupOptions, put=__set_m_GroupOptions)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*  m_GroupOptions;

/// @brief Field m_SelectedOption offset 0x18
 __declspec(property(get=__get_m_SelectedOption, put=__set_m_SelectedOption)) ::UnityEngine::UIElements::IGroupBoxOption*  m_SelectedOption;

/// @brief Convert operator to "::UnityEngine::UIElements::IGroupManager"
constexpr operator  ::UnityEngine::UIElements::IGroupManager*() noexcept;

constexpr void __set_m_GroupOptions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>* __get_m_GroupOptions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*> __get_m_GroupOptions() const;

constexpr void __set_m_SelectedOption(::UnityEngine::UIElements::IGroupBoxOption*  value) ;

constexpr ::UnityEngine::UIElements::IGroupBoxOption* __get_m_SelectedOption() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IGroupBoxOption*> __get_m_SelectedOption() const;

/// @brief Method OnOptionSelectionChanged addr 0x2dc839c size 0x1d0 virtual true final true
inline void OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption*  selectedOption) ;

/// @brief Method RegisterOption addr 0x2dc856c size 0xd4 virtual true final true
inline void RegisterOption(::UnityEngine::UIElements::IGroupBoxOption*  option) ;

/// @brief Method UnregisterOption addr 0x2dc8640 size 0x58 virtual true final true
inline void UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption*  option) ;

static inline ::UnityEngine::UIElements::DefaultGroupManager* New_ctor() ;

/// @brief Method .ctor addr 0x2dc8698 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultGroupManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultGroupManager(DefaultGroupManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultGroupManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultGroupManager(DefaultGroupManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultGroupManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultGroupManager, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DefaultGroupManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultGroupManager*, "UnityEngine.UIElements", "DefaultGroupManager");
