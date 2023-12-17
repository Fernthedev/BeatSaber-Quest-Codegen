#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Alloc)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::Alloc);
// Type: UnityEngine.UIElements.UIR::Alloc
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7433))
// CS Name: ::UnityEngine.UIElements.UIR::Alloc
struct CORDL_TYPE Alloc : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field start offset 0x0
 __declspec(property(get=__get_start, put=__set_start)) uint32_t  start;

/// @brief Field size offset 0x4
 __declspec(property(get=__get_size, put=__set_size)) uint32_t  size;

/// @brief Field handle offset 0x8
 __declspec(property(get=__get_handle, put=__set_handle)) ::System::Object*  handle;

/// @brief Field shortLived offset 0x10
 __declspec(property(get=__get_shortLived, put=__set_shortLived)) bool  shortLived;

constexpr void __set_start(uint32_t  value) ;

constexpr uint32_t& __get_start() ;

constexpr uint32_t const& __get_start() const;

constexpr void __set_size(uint32_t  value) ;

constexpr uint32_t& __get_size() ;

constexpr uint32_t const& __get_size() const;

constexpr void __set_handle(::System::Object*  value) ;

constexpr ::System::Object* __get_handle() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_handle() const;

constexpr void __set_shortLived(bool  value) ;

constexpr bool& __get_shortLived() ;

constexpr bool const& __get_shortLived() const;

// Ctor Parameters [CppParam { name: "start", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "handle", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "shortLived", ty: "bool", modifiers: "", def_value: None }]
constexpr Alloc(uint32_t  start, uint32_t  size, ::System::Object*  handle, bool  shortLived) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Alloc(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Alloc()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Alloc, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Alloc, "UnityEngine.UIElements.UIR", "Alloc");
