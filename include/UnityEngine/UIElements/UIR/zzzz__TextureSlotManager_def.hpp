#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureSlotManager)
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class TextureSlotManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::TextureSlotManager);
// Type: UnityEngine.UIElements.UIR::TextureSlotManager
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7408))
// CS Name: ::UnityEngine.UIElements.UIR::TextureSlotManager*
class CORDL_TYPE TextureSlotManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field m_Textures offset 0x10
 __declspec(property(get=__get_m_Textures, put=__set_m_Textures)) ::ArrayW<::UnityEngine::UIElements::TextureId,::Array<::UnityEngine::UIElements::TextureId>*>  m_Textures;

/// @brief Field m_Tickets offset 0x18
 __declspec(property(get=__get_m_Tickets, put=__set_m_Tickets)) ::ArrayW<int32_t,::Array<int32_t>*>  m_Tickets;

/// @brief Field m_CurrentTicket offset 0x20
 __declspec(property(get=__get_m_CurrentTicket, put=__set_m_CurrentTicket)) int32_t  m_CurrentTicket;

/// @brief Field m_FirstUsedTicket offset 0x24
 __declspec(property(get=__get_m_FirstUsedTicket, put=__set_m_FirstUsedTicket)) int32_t  m_FirstUsedTicket;

/// @brief Field m_GpuTextures offset 0x28
 __declspec(property(get=__get_m_GpuTextures, put=__set_m_GpuTextures)) ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  m_GpuTextures;

/// @brief Field <FreeSlots>k__BackingField offset 0x30
 __declspec(property(get=__get__FreeSlots_k__BackingField, put=__set__FreeSlots_k__BackingField)) int32_t  _FreeSlots_k__BackingField;

/// @brief Field textureRegistry offset 0x38
 __declspec(property(get=__get_textureRegistry, put=__set_textureRegistry)) ::UnityEngine::UIElements::TextureRegistry*  textureRegistry;

 __declspec(property(get=get_FreeSlots, put=set_FreeSlots)) int32_t  FreeSlots;

static inline void setStaticF_k_SlotCount(int32_t  value) ;

static inline int32_t getStaticF_k_SlotCount() ;

static inline void setStaticF_slotIds(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_slotIds() ;

static inline void setStaticF_textureTableId(int32_t  value) ;

static inline int32_t getStaticF_textureTableId() ;

constexpr void __set_m_Textures(::ArrayW<::UnityEngine::UIElements::TextureId,::Array<::UnityEngine::UIElements::TextureId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::TextureId,::Array<::UnityEngine::UIElements::TextureId>*>& __get_m_Textures() ;

constexpr ::ArrayW<::UnityEngine::UIElements::TextureId,::Array<::UnityEngine::UIElements::TextureId>*> const& __get_m_Textures() const;

constexpr void __set_m_Tickets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_m_Tickets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_m_Tickets() const;

constexpr void __set_m_CurrentTicket(int32_t  value) ;

constexpr int32_t& __get_m_CurrentTicket() ;

constexpr int32_t const& __get_m_CurrentTicket() const;

constexpr void __set_m_FirstUsedTicket(int32_t  value) ;

constexpr int32_t& __get_m_FirstUsedTicket() ;

constexpr int32_t const& __get_m_FirstUsedTicket() const;

constexpr void __set_m_GpuTextures(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& __get_m_GpuTextures() ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& __get_m_GpuTextures() const;

constexpr void __set__FreeSlots_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__FreeSlots_k__BackingField() ;

constexpr int32_t const& __get__FreeSlots_k__BackingField() const;

constexpr void __set_textureRegistry(::UnityEngine::UIElements::TextureRegistry*  value) ;

constexpr ::UnityEngine::UIElements::TextureRegistry* __get_textureRegistry() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextureRegistry*> __get_textureRegistry() const;

static inline ::UnityEngine::UIElements::UIR::TextureSlotManager* New_ctor() ;

/// @brief Method .ctor addr 0x2e9a040 size 0x168 virtual false final false
inline void _ctor() ;

/// @brief Method Reset addr 0x2e9a1a8 size 0x12c virtual false final false
inline void Reset() ;

/// @brief Method StartNewBatch addr 0x2e9a2d4 size 0x6c virtual false final false
inline void StartNewBatch() ;

/// @brief Method IndexOf addr 0x2e9a340 size 0xd4 virtual false final false
inline int32_t IndexOf(::UnityEngine::UIElements::TextureId  id) ;

/// @brief Method MarkUsed addr 0x2e9a414 size 0x58 virtual false final false
inline void MarkUsed(int32_t  slotIndex) ;

/// @brief Method get_FreeSlots addr 0x2e9a46c size 0x8 virtual false final false
inline int32_t get_FreeSlots() ;

/// @brief Method set_FreeSlots addr 0x2e9a474 size 0x8 virtual false final false
inline void set_FreeSlots(int32_t  value) ;

/// @brief Method FindOldestSlot addr 0x2e9a47c size 0xd0 virtual false final false
inline int32_t FindOldestSlot() ;

/// @brief Method Bind addr 0x2e9a54c size 0x218 virtual false final false
inline void Bind(::UnityEngine::UIElements::TextureId  id, int32_t  slot, ::UnityEngine::MaterialPropertyBlock*  mat) ;

// Ctor Parameters [CppParam { name: "", ty: "TextureSlotManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureSlotManager(TextureSlotManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureSlotManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureSlotManager(TextureSlotManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextureSlotManager()  = default;
public:


// Fields

// Static field k_SlotCount

// Static field slotIds

// Static field textureTableId


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TextureSlotManager, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::TextureSlotManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextureSlotManager*, "UnityEngine.UIElements.UIR", "TextureSlotManager");
