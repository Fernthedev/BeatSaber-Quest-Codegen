#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshId)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR {
struct MeshId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::MeshId);
// Type: UnityEngine.XR::MeshId
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15633))
// CS Name: ::UnityEngine.XR::MeshId
struct CORDL_TYPE MeshId : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_SubId1 offset 0x0
 __declspec(property(get=__get_m_SubId1, put=__set_m_SubId1)) uint64_t  m_SubId1;

/// @brief Field m_SubId2 offset 0x8
 __declspec(property(get=__get_m_SubId2, put=__set_m_SubId2)) uint64_t  m_SubId2;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::MeshId>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::MeshId>*() ;

static inline void setStaticF_s_InvalidId(::UnityEngine::XR::MeshId  value) ;

static inline ::UnityEngine::XR::MeshId getStaticF_s_InvalidId() ;

constexpr void __set_m_SubId1(uint64_t  value) ;

constexpr uint64_t& __get_m_SubId1() ;

constexpr uint64_t const& __get_m_SubId1() const;

constexpr void __set_m_SubId2(uint64_t  value) ;

constexpr uint64_t& __get_m_SubId2() ;

constexpr uint64_t const& __get_m_SubId2() const;

/// @brief Method ToString addr 0x2eb36a8 size 0x94 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2eb373c size 0x34 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2eb3770 size 0x88 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2eb37f8 size 0x24 virtual true final true
inline bool Equals(::UnityEngine::XR::MeshId  other) ;

// Ctor Parameters [CppParam { name: "m_SubId1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_SubId2", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr MeshId(uint64_t  m_SubId1, uint64_t  m_SubId2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MeshId(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MeshId()  = default;


// Fields

// Static field s_InvalidId


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::MeshId, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshId, "UnityEngine.XR", "MeshId");
